#include "LobbyUserWidgetInput.h"

FLobbyUserWidgetInput::FLobbyUserWidgetInput() {
    this->_down = false;
    this->_left = false;
    this->_right = false;
    this->_up = false;
    this->_faceBottom = false;
    this->_faceLeft = false;
    this->_faceRight = false;
    this->_faceTop = false;
    this->_leftSholder = false;
    this->_leftTrigger = false;
    this->_leftThumbButton = false;
    this->_rightSholder = false;
    this->_rightTrigger = false;
    this->_rightThumbButton = false;
    this->_specialLeft = false;
    this->_updownValue = 0.00f;
    this->_escape = false;
    this->_enter = false;
    this->Device = ELobbyInputDeviceType::None;
    this->_updownTrg = 0;
    this->_leftrightTrg = 0;
    this->_leftrightshoulderTrg = 0;
}

