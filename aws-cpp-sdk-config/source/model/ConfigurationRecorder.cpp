﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/config/model/ConfigurationRecorder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigurationRecorder::ConfigurationRecorder() : 
    m_nameHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_recordingGroupHasBeenSet(false)
{
}

ConfigurationRecorder::ConfigurationRecorder(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_recordingGroupHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationRecorder& ConfigurationRecorder::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleARN"))
  {
    m_roleARN = jsonValue.GetString("roleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordingGroup"))
  {
    m_recordingGroup = jsonValue.GetObject("recordingGroup");

    m_recordingGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationRecorder::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("roleARN", m_roleARN);

  }

  if(m_recordingGroupHasBeenSet)
  {
   payload.WithObject("recordingGroup", m_recordingGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
