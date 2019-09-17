/**
 *
 *  Groups.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Groups.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon_model::sqlite3;

const std::string Groups::Cols::_group_id = "group_id";
const std::string Groups::Cols::_group_name = "group_name";
const std::string Groups::Cols::_creater_id = "creater_id";
const std::string Groups::Cols::_create_time = "create_time";
const std::string Groups::Cols::_inviting = "inviting";
const std::string Groups::Cols::_inviting_user_id = "inviting_user_id";
const std::string Groups::Cols::_avatar_id = "avatar_id";
const std::string Groups::Cols::_uuu = "uuu";
const std::string Groups::Cols::_text = "text";
const std::string Groups::Cols::_avatar = "avatar";
const std::string Groups::Cols::_is_default = "is_default";
const std::string Groups::primaryKeyName = "group_id";
const bool Groups::hasPrimaryKey = true;
const std::string Groups::tableName = "GROUPS";

const std::vector<typename Groups::MetaData> Groups::_metaData = {
    {"group_id", "uint64_t", "integer", 8, 1, 1, 0},
    {"group_name", "std::string", "text", 0, 0, 0, 0},
    {"creater_id", "uint64_t", "integer", 8, 0, 0, 0},
    {"create_time", "std::string", "text", 0, 0, 0, 0},
    {"inviting", "uint64_t", "integer", 8, 0, 0, 0},
    {"inviting_user_id", "uint64_t", "integer", 8, 0, 0, 0},
    {"avatar_id", "std::string", "text", 0, 0, 0, 0},
    {"uuu", "double", "double", 8, 0, 0, 0},
    {"text", "std::string", "varchar(255)", 0, 0, 0, 0},
    {"avatar", "std::vector<char>", "blob", 0, 0, 0, 0},
    {"is_default", "bool", "bool", 1, 0, 0, 0}};
const std::string &Groups::getColumnName(size_t index) noexcept(false)
{
    assert(index < _metaData.size());
    return _metaData[index]._colName;
}
Groups::Groups(const Row &r, ssize_t indexOffset) noexcept
{
    if (indexOffset < 0)
    {
        if (!r["group_id"].isNull())
        {
            _groupId = std::make_shared<uint64_t>(r["group_id"].as<uint64_t>());
        }
        if (!r["group_name"].isNull())
        {
            _groupName = std::make_shared<std::string>(
                r["group_name"].as<std::string>());
        }
        if (!r["creater_id"].isNull())
        {
            _createrId =
                std::make_shared<uint64_t>(r["creater_id"].as<uint64_t>());
        }
        if (!r["create_time"].isNull())
        {
            _createTime = std::make_shared<std::string>(
                r["create_time"].as<std::string>());
        }
        if (!r["inviting"].isNull())
        {
            _inviting =
                std::make_shared<uint64_t>(r["inviting"].as<uint64_t>());
        }
        if (!r["inviting_user_id"].isNull())
        {
            _invitingUserId = std::make_shared<uint64_t>(
                r["inviting_user_id"].as<uint64_t>());
        }
        if (!r["avatar_id"].isNull())
        {
            _avatarId =
                std::make_shared<std::string>(r["avatar_id"].as<std::string>());
        }
        if (!r["uuu"].isNull())
        {
            _uuu = std::make_shared<double>(r["uuu"].as<double>());
        }
        if (!r["text"].isNull())
        {
            _text = std::make_shared<std::string>(r["text"].as<std::string>());
        }
        if (!r["avatar"].isNull())
        {
            _avatar = std::make_shared<std::vector<char>>(
                r["avatar"].as<std::vector<char>>());
        }
        if (!r["is_default"].isNull())
        {
            _isDefault = std::make_shared<bool>(r["is_default"].as<bool>());
        }
    }
    else
    {
        if (11 + indexOffset > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = 0 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _groupId = std::make_shared<uint64_t>(r[index].as<uint64_t>());
        }
        index = 1 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _groupName =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 2 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _createrId = std::make_shared<uint64_t>(r[index].as<uint64_t>());
        }
        index = 3 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _createTime =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 4 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _inviting = std::make_shared<uint64_t>(r[index].as<uint64_t>());
        }
        index = 5 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _invitingUserId =
                std::make_shared<uint64_t>(r[index].as<uint64_t>());
        }
        index = 6 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _avatarId =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 7 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _uuu = std::make_shared<double>(r[index].as<double>());
        }
        index = 8 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _text = std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 9 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _avatar = std::make_shared<std::vector<char>>(
                r[index].as<std::vector<char>>());
        }
        index = 10 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _isDefault = std::make_shared<bool>(r[index].as<bool>());
        }
    }
}

Groups::Groups(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("group_id"))
    {
        _groupId =
            std::make_shared<uint64_t>((uint64_t)pJson["group_id"].asUInt64());
    }
    if (pJson.isMember("group_name"))
    {
        _groupName =
            std::make_shared<std::string>(pJson["group_name"].asString());
    }
    if (pJson.isMember("creater_id"))
    {
        _createrId = std::make_shared<uint64_t>(
            (uint64_t)pJson["creater_id"].asUInt64());
    }
    if (pJson.isMember("create_time"))
    {
        _createTime =
            std::make_shared<std::string>(pJson["create_time"].asString());
    }
    if (pJson.isMember("inviting"))
    {
        _inviting =
            std::make_shared<uint64_t>((uint64_t)pJson["inviting"].asUInt64());
    }
    if (pJson.isMember("inviting_user_id"))
    {
        _invitingUserId = std::make_shared<uint64_t>(
            (uint64_t)pJson["inviting_user_id"].asUInt64());
    }
    if (pJson.isMember("avatar_id"))
    {
        _avatarId =
            std::make_shared<std::string>(pJson["avatar_id"].asString());
    }
    if (pJson.isMember("uuu"))
    {
        _uuu = std::make_shared<double>(pJson["uuu"].asDouble());
    }
    if (pJson.isMember("text"))
    {
        _text = std::make_shared<std::string>(pJson["text"].asString());
    }
    if (pJson.isMember("avatar"))
    {
        auto str = pJson["avatar"].asString();
        _avatar = std::make_shared<std::vector<char>>(
            drogon::utils::base64DecodeToVector(str));
    }
    if (pJson.isMember("is_default"))
    {
        _isDefault = std::make_shared<bool>(pJson["is_default"].asBool());
    }
}
void Groups::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("group_id"))
    {
        _groupId =
            std::make_shared<uint64_t>((uint64_t)pJson["group_id"].asUInt64());
    }
    if (pJson.isMember("group_name"))
    {
        _dirtyFlag[1] = true;
        _groupName =
            std::make_shared<std::string>(pJson["group_name"].asString());
    }
    if (pJson.isMember("creater_id"))
    {
        _dirtyFlag[2] = true;
        _createrId = std::make_shared<uint64_t>(
            (uint64_t)pJson["creater_id"].asUInt64());
    }
    if (pJson.isMember("create_time"))
    {
        _dirtyFlag[3] = true;
        _createTime =
            std::make_shared<std::string>(pJson["create_time"].asString());
    }
    if (pJson.isMember("inviting"))
    {
        _dirtyFlag[4] = true;
        _inviting =
            std::make_shared<uint64_t>((uint64_t)pJson["inviting"].asUInt64());
    }
    if (pJson.isMember("inviting_user_id"))
    {
        _dirtyFlag[5] = true;
        _invitingUserId = std::make_shared<uint64_t>(
            (uint64_t)pJson["inviting_user_id"].asUInt64());
    }
    if (pJson.isMember("avatar_id"))
    {
        _dirtyFlag[6] = true;
        _avatarId =
            std::make_shared<std::string>(pJson["avatar_id"].asString());
    }
    if (pJson.isMember("uuu"))
    {
        _dirtyFlag[7] = true;
        _uuu = std::make_shared<double>(pJson["uuu"].asDouble());
    }
    if (pJson.isMember("text"))
    {
        _dirtyFlag[8] = true;
        _text = std::make_shared<std::string>(pJson["text"].asString());
    }
    if (pJson.isMember("avatar"))
    {
        _dirtyFlag[9] = true;
        auto str = pJson["avatar"].asString();
        _avatar = std::make_shared<std::vector<char>>(
            drogon::utils::base64DecodeToVector(str));
    }
    if (pJson.isMember("is_default"))
    {
        _dirtyFlag[10] = true;
        _isDefault = std::make_shared<bool>(pJson["is_default"].asBool());
    }
}

const uint64_t &Groups::getValueOfGroupId() const noexcept
{
    const static uint64_t defaultValue = uint64_t();
    if (_groupId)
        return *_groupId;
    return defaultValue;
}
const std::shared_ptr<uint64_t> &Groups::getGroupId() const noexcept
{
    return _groupId;
}
const typename Groups::PrimaryKeyType &Groups::getPrimaryKey() const
{
    assert(_groupId);
    return *_groupId;
}

const std::string &Groups::getValueOfGroupName() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_groupName)
        return *_groupName;
    return defaultValue;
}
const std::shared_ptr<std::string> &Groups::getGroupName() const noexcept
{
    return _groupName;
}
void Groups::setGroupName(const std::string &pGroupName) noexcept
{
    _groupName = std::make_shared<std::string>(pGroupName);
    _dirtyFlag[1] = true;
}
void Groups::setGroupName(std::string &&pGroupName) noexcept
{
    _groupName = std::make_shared<std::string>(std::move(pGroupName));
    _dirtyFlag[1] = true;
}

const uint64_t &Groups::getValueOfCreaterId() const noexcept
{
    const static uint64_t defaultValue = uint64_t();
    if (_createrId)
        return *_createrId;
    return defaultValue;
}
const std::shared_ptr<uint64_t> &Groups::getCreaterId() const noexcept
{
    return _createrId;
}
void Groups::setCreaterId(const uint64_t &pCreaterId) noexcept
{
    _createrId = std::make_shared<uint64_t>(pCreaterId);
    _dirtyFlag[2] = true;
}

const std::string &Groups::getValueOfCreateTime() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_createTime)
        return *_createTime;
    return defaultValue;
}
const std::shared_ptr<std::string> &Groups::getCreateTime() const noexcept
{
    return _createTime;
}
void Groups::setCreateTime(const std::string &pCreateTime) noexcept
{
    _createTime = std::make_shared<std::string>(pCreateTime);
    _dirtyFlag[3] = true;
}
void Groups::setCreateTime(std::string &&pCreateTime) noexcept
{
    _createTime = std::make_shared<std::string>(std::move(pCreateTime));
    _dirtyFlag[3] = true;
}

const uint64_t &Groups::getValueOfInviting() const noexcept
{
    const static uint64_t defaultValue = uint64_t();
    if (_inviting)
        return *_inviting;
    return defaultValue;
}
const std::shared_ptr<uint64_t> &Groups::getInviting() const noexcept
{
    return _inviting;
}
void Groups::setInviting(const uint64_t &pInviting) noexcept
{
    _inviting = std::make_shared<uint64_t>(pInviting);
    _dirtyFlag[4] = true;
}

const uint64_t &Groups::getValueOfInvitingUserId() const noexcept
{
    const static uint64_t defaultValue = uint64_t();
    if (_invitingUserId)
        return *_invitingUserId;
    return defaultValue;
}
const std::shared_ptr<uint64_t> &Groups::getInvitingUserId() const noexcept
{
    return _invitingUserId;
}
void Groups::setInvitingUserId(const uint64_t &pInvitingUserId) noexcept
{
    _invitingUserId = std::make_shared<uint64_t>(pInvitingUserId);
    _dirtyFlag[5] = true;
}

const std::string &Groups::getValueOfAvatarId() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_avatarId)
        return *_avatarId;
    return defaultValue;
}
const std::shared_ptr<std::string> &Groups::getAvatarId() const noexcept
{
    return _avatarId;
}
void Groups::setAvatarId(const std::string &pAvatarId) noexcept
{
    _avatarId = std::make_shared<std::string>(pAvatarId);
    _dirtyFlag[6] = true;
}
void Groups::setAvatarId(std::string &&pAvatarId) noexcept
{
    _avatarId = std::make_shared<std::string>(std::move(pAvatarId));
    _dirtyFlag[6] = true;
}

const double &Groups::getValueOfUuu() const noexcept
{
    const static double defaultValue = double();
    if (_uuu)
        return *_uuu;
    return defaultValue;
}
const std::shared_ptr<double> &Groups::getUuu() const noexcept
{
    return _uuu;
}
void Groups::setUuu(const double &pUuu) noexcept
{
    _uuu = std::make_shared<double>(pUuu);
    _dirtyFlag[7] = true;
}

const std::string &Groups::getValueOfText() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_text)
        return *_text;
    return defaultValue;
}
const std::shared_ptr<std::string> &Groups::getText() const noexcept
{
    return _text;
}
void Groups::setText(const std::string &pText) noexcept
{
    _text = std::make_shared<std::string>(pText);
    _dirtyFlag[8] = true;
}
void Groups::setText(std::string &&pText) noexcept
{
    _text = std::make_shared<std::string>(std::move(pText));
    _dirtyFlag[8] = true;
}

const std::vector<char> &Groups::getValueOfAvatar() const noexcept
{
    const static std::vector<char> defaultValue = std::vector<char>();
    if (_avatar)
        return *_avatar;
    return defaultValue;
}
std::string Groups::getValueOfAvatarAsString() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_avatar)
        return std::string(_avatar->data(), _avatar->size());
    return defaultValue;
}
const std::shared_ptr<std::vector<char>> &Groups::getAvatar() const noexcept
{
    return _avatar;
}
void Groups::setAvatar(const std::vector<char> &pAvatar) noexcept
{
    _avatar = std::make_shared<std::vector<char>>(pAvatar);
    _dirtyFlag[9] = true;
}

void Groups::setAvatar(const std::string &pAvatar) noexcept
{
    _avatar =
        std::make_shared<std::vector<char>>(pAvatar.c_str(),
                                            pAvatar.c_str() + pAvatar.length());
    _dirtyFlag[9] = true;
}

const bool &Groups::getValueOfIsDefault() const noexcept
{
    const static bool defaultValue = bool();
    if (_isDefault)
        return *_isDefault;
    return defaultValue;
}
const std::shared_ptr<bool> &Groups::getIsDefault() const noexcept
{
    return _isDefault;
}
void Groups::setIsDefault(const bool &pIsDefault) noexcept
{
    _isDefault = std::make_shared<bool>(pIsDefault);
    _dirtyFlag[10] = true;
}

void Groups::updateId(const uint64_t id)
{
    _groupId = std::make_shared<uint64_t>(id);
}

const std::vector<std::string> &Groups::insertColumns() noexcept
{
    static const std::vector<std::string> _inCols = {"group_name",
                                                     "creater_id",
                                                     "create_time",
                                                     "inviting",
                                                     "inviting_user_id",
                                                     "avatar_id",
                                                     "uuu",
                                                     "text",
                                                     "avatar",
                                                     "is_default"};
    return _inCols;
}

void Groups::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (getGroupName())
    {
        binder << getValueOfGroupName();
    }
    else
    {
        binder << nullptr;
    }
    if (getCreaterId())
    {
        binder << getValueOfCreaterId();
    }
    else
    {
        binder << nullptr;
    }
    if (getCreateTime())
    {
        binder << getValueOfCreateTime();
    }
    else
    {
        binder << nullptr;
    }
    if (getInviting())
    {
        binder << getValueOfInviting();
    }
    else
    {
        binder << nullptr;
    }
    if (getInvitingUserId())
    {
        binder << getValueOfInvitingUserId();
    }
    else
    {
        binder << nullptr;
    }
    if (getAvatarId())
    {
        binder << getValueOfAvatarId();
    }
    else
    {
        binder << nullptr;
    }
    if (getUuu())
    {
        binder << getValueOfUuu();
    }
    else
    {
        binder << nullptr;
    }
    if (getText())
    {
        binder << getValueOfText();
    }
    else
    {
        binder << nullptr;
    }
    if (getAvatar())
    {
        binder << getValueOfAvatar();
    }
    else
    {
        binder << nullptr;
    }
    if (getIsDefault())
    {
        binder << getValueOfIsDefault();
    }
    else
    {
        binder << nullptr;
    }
}

const std::vector<std::string> Groups::updateColumns() const
{
    std::vector<std::string> ret;
    for (size_t i = 0; i < sizeof(_dirtyFlag); i++)
    {
        if (_dirtyFlag[i])
        {
            ret.push_back(getColumnName(i));
        }
    }
    return ret;
}

void Groups::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (_dirtyFlag[1])
    {
        if (getGroupName())
        {
            binder << getValueOfGroupName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[2])
    {
        if (getCreaterId())
        {
            binder << getValueOfCreaterId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[3])
    {
        if (getCreateTime())
        {
            binder << getValueOfCreateTime();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[4])
    {
        if (getInviting())
        {
            binder << getValueOfInviting();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[5])
    {
        if (getInvitingUserId())
        {
            binder << getValueOfInvitingUserId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[6])
    {
        if (getAvatarId())
        {
            binder << getValueOfAvatarId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[7])
    {
        if (getUuu())
        {
            binder << getValueOfUuu();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[8])
    {
        if (getText())
        {
            binder << getValueOfText();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[9])
    {
        if (getAvatar())
        {
            binder << getValueOfAvatar();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[10])
    {
        if (getIsDefault())
        {
            binder << getValueOfIsDefault();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Groups::toJson() const
{
    Json::Value ret;
    if (getGroupId())
    {
        ret["group_id"] = (Json::UInt64)getValueOfGroupId();
    }
    else
    {
        ret["group_id"] = Json::Value();
    }
    if (getGroupName())
    {
        ret["group_name"] = getValueOfGroupName();
    }
    else
    {
        ret["group_name"] = Json::Value();
    }
    if (getCreaterId())
    {
        ret["creater_id"] = (Json::UInt64)getValueOfCreaterId();
    }
    else
    {
        ret["creater_id"] = Json::Value();
    }
    if (getCreateTime())
    {
        ret["create_time"] = getValueOfCreateTime();
    }
    else
    {
        ret["create_time"] = Json::Value();
    }
    if (getInviting())
    {
        ret["inviting"] = (Json::UInt64)getValueOfInviting();
    }
    else
    {
        ret["inviting"] = Json::Value();
    }
    if (getInvitingUserId())
    {
        ret["inviting_user_id"] = (Json::UInt64)getValueOfInvitingUserId();
    }
    else
    {
        ret["inviting_user_id"] = Json::Value();
    }
    if (getAvatarId())
    {
        ret["avatar_id"] = getValueOfAvatarId();
    }
    else
    {
        ret["avatar_id"] = Json::Value();
    }
    if (getUuu())
    {
        ret["uuu"] = getValueOfUuu();
    }
    else
    {
        ret["uuu"] = Json::Value();
    }
    if (getText())
    {
        ret["text"] = getValueOfText();
    }
    else
    {
        ret["text"] = Json::Value();
    }
    if (getAvatar())
    {
        ret["avatar"] = drogon::utils::base64Encode(
            (const unsigned char *)getAvatar()->data(), getAvatar()->size());
    }
    else
    {
        ret["avatar"] = Json::Value();
    }
    if (getIsDefault())
    {
        ret["is_default"] = getValueOfIsDefault();
    }
    else
    {
        ret["is_default"] = Json::Value();
    }
    return ret;
}
