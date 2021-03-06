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
#include <aws/elasticbeanstalk/model/Queue.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

Queue::Queue() : 
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

Queue::Queue(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
  *this = xmlNode;
}

Queue& Queue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode uRLNode = resultNode.FirstChild("URL");
    if(!uRLNode.IsNull())
    {
      m_uRL = StringUtils::Trim(uRLNode.GetText().c_str());
      m_uRLHasBeenSet = true;
    }
  }

  return *this;
}

void Queue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_uRLHasBeenSet)
  {
      oStream << location << index << locationValue << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }
}

void Queue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_uRLHasBeenSet)
  {
      oStream << location << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
