/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a REST API.</p>
   */
  class AWS_APIGATEWAY_API CreateRestApiResult
  {
  public:
    CreateRestApiResult();
    CreateRestApiResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRestApiResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = value; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline CreateRestApiResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline CreateRestApiResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * Amazon API Gateway.</p>
     */
    inline CreateRestApiResult& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The API's name.</p>
     */
    inline CreateRestApiResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline CreateRestApiResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline CreateRestApiResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The API's description.</p>
     */
    inline CreateRestApiResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline CreateRestApiResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline CreateRestApiResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The date when the API was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the API was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date when the API was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = value; }

    /**
     * <p>The date when the API was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline CreateRestApiResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the API was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline CreateRestApiResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }

    
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = value; }

    
    inline CreateRestApiResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    
    inline CreateRestApiResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(value); return *this;}

    
    inline CreateRestApiResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }

    
    inline CreateRestApiResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(value); return *this; }

    
    inline CreateRestApiResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }

  private:
    Aws::String m_id;
    Aws::String m_name;
    Aws::String m_description;
    Aws::Utils::DateTime m_createdDate;
    Aws::Vector<Aws::String> m_warnings;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
