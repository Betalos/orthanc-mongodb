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



#include "MongoDBConnection.h"
#include <boost/lexical_cast.hpp>

namespace OrthancPlugins
{
  
  MongoDBConnection::MongoDBConnection()
  {
    uri_.clear();
  }
 
  MongoDBConnection::MongoDBConnection(const MongoDBConnection& other) :
    uri_(other.uri_)
  {
  }


  void MongoDBConnection::SetConnectionUri(const std::string& uri)
  {
    uri_ = uri;
  }

  std::string MongoDBConnection::GetConnectionUri() const
  {
      return uri_;
  }
}
