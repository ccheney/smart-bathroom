var socket = io();

var App = function () {
    return this.init();
};

App.prototype.init = function () {
    return this
        .setupHandlers()
        .createChildren()
        .enable();
};

App.prototype.setupHandlers = function () {
    this.onOpenMessageHandler = this.onOpenMessage.bind(this);
    this.onCloseMessageHandler = this.onCloseMessage.bind(this);
    this.onErrorMessageHandler = this.onErrorMessage.bind(this);

    return this;
};

App.prototype.createChildren = function () {
    this.box = document.querySelector('.box');
    this.icon = document.querySelector('.icon');

    return this;
};

App.prototype.enable = function () {
    socket.connect();

    socket.on('open', this.onOpenMessageHandler);
    socket.on('close', this.onCloseMessageHandler);
    socket.on('error', this.onErrorMessageHandler);

    return this;
};

App.prototype.onOpenMessage = function () {
    this.box.classList.remove('box_isActive');
    this.icon.classList.remove('icon_isActive');

    this.box.classList.add('box_isInActive');
    this.icon.classList.add('icon_isInActive');

    return this;
};

App.prototype.onCloseMessage = function () {
    this.box.classList.remove('box_isInActive');
    this.icon.classList.remove('icon_isInActive');

    this.box.classList.add('box_isActive');
    this.icon.classList.add('icon_isActive');

    return this;
};

App.prototype.onErrorMessage = function (result) {
    console.error('Ermah G. Herde: ', result);

    return this;
};

this.app = new App();
