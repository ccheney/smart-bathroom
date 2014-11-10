/*jslint node: true */

'use strict';

var http = require('http');
var express = require('express');
var app = module.exports.app = express();

app.use(express.static(__dirname));

var server = http.createServer(app);

module.exports = server;
