/*jslint node: true */

'use strict';

var server = require('./server');
var superagent = require('superagent');

var io = require('socket.io').listen(server);

var port = process.env.PORT || 9002;

server.listen(port);

var App = function () {
    return this.init();
};

App.prototype.init = function () {
    this.bathStatus = 'spark core endpoint';

    return this.startLoop();
};

App.prototype.startLoop = function () {
    setInterval(this.getResult.bind(this), 2000);

    return this;
};

App.prototype.getResult = function () {
    superagent
        .get(this.bathStatus)
        .on('error', function (err) {
            io.emit('error', err);
        })
        .end(function (res) {
            if(res.body.result === 0) {
                io.emit('open');

                return this;
            }

            if(res.body.result === 1) {
                io.emit('close');

                return this;
            }

            io.emit('error', res);
        });

    return this;
};

module.exports = new App();
