#include "LobbyInput.h"

FLobbyInput::FLobbyInput() {
    this->_isInputActive = false;
    this->_isInputByKeyboard = false;
    this->_isInvalidByDialog = false;
    this->_isDown = false;
    this->_isLeft = false;
    this->_isRight = false;
    this->_isUp = false;
    this->_isFaceBottom = false;
    this->_isFaceLeft = false;
    this->_isFaceRight = false;
    this->_isFaceTop = false;
    this->_isLeftShoulder = false;
    this->_isLeftTrigger = false;
    this->_isRightShoulder = false;
    this->_isRightTrigger = false;
    this->_isSpecialLeft = false;
    this->_isSpecialRight = false;
    this->_isL3 = false;
    this->_isR3 = false;
    this->_isMouseRight = false;
    this->_isDecide = false;
    this->_isCancel = false;
    this->_rx = 0.00f;
    this->_ry = 0.00f;
    this->_lx = 0.00f;
    this->_ly = 0.00f;
    this->_rsValue = 0.00f;
    this->_rsRadian = 0.00f;
    this->_lsValue = 0.00f;
    this->_lsRadian = 0.00f;
    this->_dir8 = 0;
    this->_updownLvl = 0;
    this->_updownTrg = 0;
}

