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

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>When updating an output configuration using the <a>UpdateApplication</a>
   * operation, provides information about an AWS Lambda function configured as the
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/LambdaOutputUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API LambdaOutputUpdate
  {
  public:
    LambdaOutputUpdate();
    LambdaOutputUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    LambdaOutputUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p>
     */
    inline const Aws::String& GetResourceARNUpdate() const{ return m_resourceARNUpdate; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p>
     */
    inline void SetResourceARNUpdate(const Aws::String& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p>
     */
    inline void SetResourceARNUpdate(Aws::String&& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p>
     */
    inline void SetResourceARNUpdate(const char* value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p>
     */
    inline LambdaOutputUpdate& WithResourceARNUpdate(const Aws::String& value) { SetResourceARNUpdate(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p>
     */
    inline LambdaOutputUpdate& WithResourceARNUpdate(Aws::String&& value) { SetResourceARNUpdate(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p>
     */
    inline LambdaOutputUpdate& WithResourceARNUpdate(const char* value) { SetResourceARNUpdate(value); return *this;}


    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline const Aws::String& GetRoleARNUpdate() const{ return m_roleARNUpdate; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARNUpdate(const Aws::String& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARNUpdate(Aws::String&& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = std::move(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARNUpdate(const char* value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutputUpdate& WithRoleARNUpdate(const Aws::String& value) { SetRoleARNUpdate(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutputUpdate& WithRoleARNUpdate(Aws::String&& value) { SetRoleARNUpdate(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutputUpdate& WithRoleARNUpdate(const char* value) { SetRoleARNUpdate(value); return *this;}

  private:

    Aws::String m_resourceARNUpdate;
    bool m_resourceARNUpdateHasBeenSet;

    Aws::String m_roleARNUpdate;
    bool m_roleARNUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
