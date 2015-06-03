/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/TimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::codedeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TimeRange::TimeRange() : 
    m_start(0.0),
    m_startHasBeenSet(false),
    m_end(0.0),
    m_endHasBeenSet(false)
{
}

TimeRange::TimeRange(const JsonValue& jsonValue) : 
    m_start(0.0),
    m_startHasBeenSet(false),
    m_end(0.0),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRange& TimeRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetDouble("start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetDouble("end");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithDouble("start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithDouble("end", m_end);

  }

  return std::move(payload);
}