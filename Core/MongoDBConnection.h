/**
 * MongoDB Plugin - A plugin for Otrhanc DICOM Server for storing DICOM data in MongoDB Database
 * Copyright (C) 2017 DocCirrus, Germany
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General 
 * Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 **/


#pragma once

#include <stdint.h>
#include <string>
#include <boost/noncopyable.hpp>

namespace OrthancPlugins
{
  class MongoDBConnection : public boost::noncopyable
  {
  private:
    std::string uri_ = "";
    std::string host_ = "localhost";
    int port_ = 27017;
    std::string database_;
    std::string user_ = "";
    std::string password_ = "";
    std::string authenticationDatabase_ = "";
    int chunk_size_ = 255 * 1024; // Default to the 255k same as mongodb default

  public:
    MongoDBConnection();
    MongoDBConnection(const MongoDBConnection& other) = delete;
    ~MongoDBConnection() {}

    void SetConnectionUri(const std::string& uri);
    std::string GetConnectionUri() const;
    void SetChunkSize(int size);
    int GetChunkSize() const;
    std::string GetHost() const;
    void SetHost(const std::string& host);
    std::string GetDatabase() const;
    void SetDatabase(const std::string& database);
    int GetPort() const;
    void SetPort(int port);
    std::string GetUser() const;
    void SetUser(const std::string& user);
    std::string GetPassword() const;
    void SetPassword(const std::string password);
    std::string GetAuthenticationDatabase() const;
    void SetAuthenticationDatabase(const std::string authenticationDatabase);

  };
}
