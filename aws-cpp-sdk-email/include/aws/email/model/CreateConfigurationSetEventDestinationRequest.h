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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/EventDestination.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to create a configuration set event destination. A
   * configuration set event destination, which can be either Amazon CloudWatch or
   * Amazon Kinesis Firehose, describes an AWS service in which Amazon SES publishes
   * the email sending events associated with a configuration set. For information
   * about using configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetEventDestinationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API CreateConfigurationSetEventDestinationRequest : public SESRequest
  {
  public:
    CreateConfigurationSetEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSetEventDestination"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that the event destination should be
     * associated with.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>An object that describes the AWS service that email sending event information
     * will be published to.</p>
     */
    inline const EventDestination& GetEventDestination() const{ return m_eventDestination; }

    /**
     * <p>An object that describes the AWS service that email sending event information
     * will be published to.</p>
     */
    inline bool EventDestinationHasBeenSet() const { return m_eventDestinationHasBeenSet; }

    /**
     * <p>An object that describes the AWS service that email sending event information
     * will be published to.</p>
     */
    inline void SetEventDestination(const EventDestination& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = value; }

    /**
     * <p>An object that describes the AWS service that email sending event information
     * will be published to.</p>
     */
    inline void SetEventDestination(EventDestination&& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = std::move(value); }

    /**
     * <p>An object that describes the AWS service that email sending event information
     * will be published to.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithEventDestination(const EventDestination& value) { SetEventDestination(value); return *this;}

    /**
     * <p>An object that describes the AWS service that email sending event information
     * will be published to.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithEventDestination(EventDestination&& value) { SetEventDestination(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    EventDestination m_eventDestination;
    bool m_eventDestinationHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
