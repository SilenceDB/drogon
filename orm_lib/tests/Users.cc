/**
 *
 *  Users.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Users.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon_model::postgres;

const std::string Users::Cols::_user_id = "user_id";
const std::string Users::Cols::_user_name = "user_name";
const std::string Users::Cols::_password = "password";
const std::string Users::Cols::_org_name = "org_name";
const std::string Users::Cols::_signature = "signature";
const std::string Users::Cols::_avatar_id = "avatar_id";
const std::string Users::Cols::_id = "id";
const std::string Users::Cols::_salt = "salt";
const std::string Users::Cols::_admin = "admin";
const std::string Users::primaryKeyName = "id";
const bool Users::hasPrimaryKey = true;
const std::string Users::tableName = "users";

const std::vector<typename Users::MetaData> Users::_metaData = {
    {"user_id", "std::string", "character varying", 32, 0, 0, 0},
    {"user_name", "std::string", "character varying", 64, 0, 0, 0},
    {"password", "std::string", "character varying", 64, 0, 0, 0},
    {"org_name", "std::string", "character varying", 20, 0, 0, 0},
    {"signature", "std::string", "character varying", 50, 0, 0, 0},
    {"avatar_id", "std::string", "character varying", 32, 0, 0, 0},
    {"id", "int32_t", "integer", 4, 1, 1, 1},
    {"salt", "std::string", "character varying", 20, 0, 0, 0},
    {"admin", "bool", "boolean", 1, 0, 0, 0}};
const std::string &Users::getColumnName(size_t index) noexcept(false)
{
    assert(index < _metaData.size());
    return _metaData[index]._colName;
}
Users::Users(const Row &r, ssize_t indexOffset) noexcept
{
    if (indexOffset < 0)
    {
        if (!r["user_id"].isNull())
        {
            _userId =
                std::make_shared<std::string>(r["user_id"].as<std::string>());
        }
        if (!r["user_name"].isNull())
        {
            _userName =
                std::make_shared<std::string>(r["user_name"].as<std::string>());
        }
        if (!r["password"].isNull())
        {
            _password =
                std::make_shared<std::string>(r["password"].as<std::string>());
        }
        if (!r["org_name"].isNull())
        {
            _orgName =
                std::make_shared<std::string>(r["org_name"].as<std::string>());
        }
        if (!r["signature"].isNull())
        {
            _signature =
                std::make_shared<std::string>(r["signature"].as<std::string>());
        }
        if (!r["avatar_id"].isNull())
        {
            _avatarId =
                std::make_shared<std::string>(r["avatar_id"].as<std::string>());
        }
        if (!r["id"].isNull())
        {
            _id = std::make_shared<int32_t>(r["id"].as<int32_t>());
        }
        if (!r["salt"].isNull())
        {
            _salt = std::make_shared<std::string>(r["salt"].as<std::string>());
        }
        if (!r["admin"].isNull())
        {
            _admin = std::make_shared<bool>(r["admin"].as<bool>());
        }
    }
    else
    {
        if (9 + indexOffset > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = 0 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _userId = std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 1 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _userName =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 2 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _password =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 3 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _orgName =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 4 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _signature =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 5 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _avatarId =
                std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 6 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _id = std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = 7 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _salt = std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = 8 + (size_t)indexOffset;
        if (!r[index].isNull())
        {
            _admin = std::make_shared<bool>(r[index].as<bool>());
        }
    }
}

Users::Users(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("user_id"))
    {
        _userId = std::make_shared<std::string>(pJson["user_id"].asString());
    }
    if (pJson.isMember("user_name"))
    {
        _userName =
            std::make_shared<std::string>(pJson["user_name"].asString());
    }
    if (pJson.isMember("password"))
    {
        _password = std::make_shared<std::string>(pJson["password"].asString());
    }
    if (pJson.isMember("org_name"))
    {
        _orgName = std::make_shared<std::string>(pJson["org_name"].asString());
    }
    if (pJson.isMember("signature"))
    {
        _signature =
            std::make_shared<std::string>(pJson["signature"].asString());
    }
    if (pJson.isMember("avatar_id"))
    {
        _avatarId =
            std::make_shared<std::string>(pJson["avatar_id"].asString());
    }
    if (pJson.isMember("id"))
    {
        _id = std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
    }
    if (pJson.isMember("salt"))
    {
        _salt = std::make_shared<std::string>(pJson["salt"].asString());
    }
    if (pJson.isMember("admin"))
    {
        _admin = std::make_shared<bool>(pJson["admin"].asBool());
    }
}
void Users::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if (pJson.isMember("user_id"))
    {
        _dirtyFlag[0] = true;
        _userId = std::make_shared<std::string>(pJson["user_id"].asString());
    }
    if (pJson.isMember("user_name"))
    {
        _dirtyFlag[1] = true;
        _userName =
            std::make_shared<std::string>(pJson["user_name"].asString());
    }
    if (pJson.isMember("password"))
    {
        _dirtyFlag[2] = true;
        _password = std::make_shared<std::string>(pJson["password"].asString());
    }
    if (pJson.isMember("org_name"))
    {
        _dirtyFlag[3] = true;
        _orgName = std::make_shared<std::string>(pJson["org_name"].asString());
    }
    if (pJson.isMember("signature"))
    {
        _dirtyFlag[4] = true;
        _signature =
            std::make_shared<std::string>(pJson["signature"].asString());
    }
    if (pJson.isMember("avatar_id"))
    {
        _dirtyFlag[5] = true;
        _avatarId =
            std::make_shared<std::string>(pJson["avatar_id"].asString());
    }
    if (pJson.isMember("id"))
    {
        _id = std::make_shared<int32_t>((int32_t)pJson["id"].asInt64());
    }
    if (pJson.isMember("salt"))
    {
        _dirtyFlag[7] = true;
        _salt = std::make_shared<std::string>(pJson["salt"].asString());
    }
    if (pJson.isMember("admin"))
    {
        _dirtyFlag[8] = true;
        _admin = std::make_shared<bool>(pJson["admin"].asBool());
    }
}

const std::string &Users::getValueOfUserId() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_userId)
        return *_userId;
    return defaultValue;
}
const std::shared_ptr<std::string> &Users::getUserId() const noexcept
{
    return _userId;
}
void Users::setUserId(const std::string &pUserId) noexcept
{
    _userId = std::make_shared<std::string>(pUserId);
    _dirtyFlag[0] = true;
}
void Users::setUserId(std::string &&pUserId) noexcept
{
    _userId = std::make_shared<std::string>(std::move(pUserId));
    _dirtyFlag[0] = true;
}

const std::string &Users::getValueOfUserName() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_userName)
        return *_userName;
    return defaultValue;
}
const std::shared_ptr<std::string> &Users::getUserName() const noexcept
{
    return _userName;
}
void Users::setUserName(const std::string &pUserName) noexcept
{
    _userName = std::make_shared<std::string>(pUserName);
    _dirtyFlag[1] = true;
}
void Users::setUserName(std::string &&pUserName) noexcept
{
    _userName = std::make_shared<std::string>(std::move(pUserName));
    _dirtyFlag[1] = true;
}

const std::string &Users::getValueOfPassword() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_password)
        return *_password;
    return defaultValue;
}
const std::shared_ptr<std::string> &Users::getPassword() const noexcept
{
    return _password;
}
void Users::setPassword(const std::string &pPassword) noexcept
{
    _password = std::make_shared<std::string>(pPassword);
    _dirtyFlag[2] = true;
}
void Users::setPassword(std::string &&pPassword) noexcept
{
    _password = std::make_shared<std::string>(std::move(pPassword));
    _dirtyFlag[2] = true;
}

const std::string &Users::getValueOfOrgName() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_orgName)
        return *_orgName;
    return defaultValue;
}
const std::shared_ptr<std::string> &Users::getOrgName() const noexcept
{
    return _orgName;
}
void Users::setOrgName(const std::string &pOrgName) noexcept
{
    _orgName = std::make_shared<std::string>(pOrgName);
    _dirtyFlag[3] = true;
}
void Users::setOrgName(std::string &&pOrgName) noexcept
{
    _orgName = std::make_shared<std::string>(std::move(pOrgName));
    _dirtyFlag[3] = true;
}

const std::string &Users::getValueOfSignature() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_signature)
        return *_signature;
    return defaultValue;
}
const std::shared_ptr<std::string> &Users::getSignature() const noexcept
{
    return _signature;
}
void Users::setSignature(const std::string &pSignature) noexcept
{
    _signature = std::make_shared<std::string>(pSignature);
    _dirtyFlag[4] = true;
}
void Users::setSignature(std::string &&pSignature) noexcept
{
    _signature = std::make_shared<std::string>(std::move(pSignature));
    _dirtyFlag[4] = true;
}

const std::string &Users::getValueOfAvatarId() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_avatarId)
        return *_avatarId;
    return defaultValue;
}
const std::shared_ptr<std::string> &Users::getAvatarId() const noexcept
{
    return _avatarId;
}
void Users::setAvatarId(const std::string &pAvatarId) noexcept
{
    _avatarId = std::make_shared<std::string>(pAvatarId);
    _dirtyFlag[5] = true;
}
void Users::setAvatarId(std::string &&pAvatarId) noexcept
{
    _avatarId = std::make_shared<std::string>(std::move(pAvatarId));
    _dirtyFlag[5] = true;
}

const int32_t &Users::getValueOfId() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if (_id)
        return *_id;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Users::getId() const noexcept
{
    return _id;
}
const typename Users::PrimaryKeyType &Users::getPrimaryKey() const
{
    assert(_id);
    return *_id;
}

const std::string &Users::getValueOfSalt() const noexcept
{
    const static std::string defaultValue = std::string();
    if (_salt)
        return *_salt;
    return defaultValue;
}
const std::shared_ptr<std::string> &Users::getSalt() const noexcept
{
    return _salt;
}
void Users::setSalt(const std::string &pSalt) noexcept
{
    _salt = std::make_shared<std::string>(pSalt);
    _dirtyFlag[7] = true;
}
void Users::setSalt(std::string &&pSalt) noexcept
{
    _salt = std::make_shared<std::string>(std::move(pSalt));
    _dirtyFlag[7] = true;
}

const bool &Users::getValueOfAdmin() const noexcept
{
    const static bool defaultValue = bool();
    if (_admin)
        return *_admin;
    return defaultValue;
}
const std::shared_ptr<bool> &Users::getAdmin() const noexcept
{
    return _admin;
}
void Users::setAdmin(const bool &pAdmin) noexcept
{
    _admin = std::make_shared<bool>(pAdmin);
    _dirtyFlag[8] = true;
}

void Users::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Users::insertColumns() noexcept
{
    static const std::vector<std::string> _inCols = {"user_id",
                                                     "user_name",
                                                     "password",
                                                     "org_name",
                                                     "signature",
                                                     "avatar_id",
                                                     "salt",
                                                     "admin"};
    return _inCols;
}

void Users::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (getUserId())
    {
        binder << getValueOfUserId();
    }
    else
    {
        binder << nullptr;
    }
    if (getUserName())
    {
        binder << getValueOfUserName();
    }
    else
    {
        binder << nullptr;
    }
    if (getPassword())
    {
        binder << getValueOfPassword();
    }
    else
    {
        binder << nullptr;
    }
    if (getOrgName())
    {
        binder << getValueOfOrgName();
    }
    else
    {
        binder << nullptr;
    }
    if (getSignature())
    {
        binder << getValueOfSignature();
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
    if (getSalt())
    {
        binder << getValueOfSalt();
    }
    else
    {
        binder << nullptr;
    }
    if (getAdmin())
    {
        binder << getValueOfAdmin();
    }
    else
    {
        binder << nullptr;
    }
}

const std::vector<std::string> Users::updateColumns() const
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

void Users::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if (_dirtyFlag[0])
    {
        if (getUserId())
        {
            binder << getValueOfUserId();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[1])
    {
        if (getUserName())
        {
            binder << getValueOfUserName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[2])
    {
        if (getPassword())
        {
            binder << getValueOfPassword();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[3])
    {
        if (getOrgName())
        {
            binder << getValueOfOrgName();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[4])
    {
        if (getSignature())
        {
            binder << getValueOfSignature();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[5])
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
        if (getSalt())
        {
            binder << getValueOfSalt();
        }
        else
        {
            binder << nullptr;
        }
    }
    if (_dirtyFlag[8])
    {
        if (getAdmin())
        {
            binder << getValueOfAdmin();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Users::toJson() const
{
    Json::Value ret;
    if (getUserId())
    {
        ret["user_id"] = getValueOfUserId();
    }
    else
    {
        ret["user_id"] = Json::Value();
    }
    if (getUserName())
    {
        ret["user_name"] = getValueOfUserName();
    }
    else
    {
        ret["user_name"] = Json::Value();
    }
    if (getPassword())
    {
        ret["password"] = getValueOfPassword();
    }
    else
    {
        ret["password"] = Json::Value();
    }
    if (getOrgName())
    {
        ret["org_name"] = getValueOfOrgName();
    }
    else
    {
        ret["org_name"] = Json::Value();
    }
    if (getSignature())
    {
        ret["signature"] = getValueOfSignature();
    }
    else
    {
        ret["signature"] = Json::Value();
    }
    if (getAvatarId())
    {
        ret["avatar_id"] = getValueOfAvatarId();
    }
    else
    {
        ret["avatar_id"] = Json::Value();
    }
    if (getId())
    {
        ret["id"] = getValueOfId();
    }
    else
    {
        ret["id"] = Json::Value();
    }
    if (getSalt())
    {
        ret["salt"] = getValueOfSalt();
    }
    else
    {
        ret["salt"] = Json::Value();
    }
    if (getAdmin())
    {
        ret["admin"] = getValueOfAdmin();
    }
    else
    {
        ret["admin"] = Json::Value();
    }
    return ret;
}
