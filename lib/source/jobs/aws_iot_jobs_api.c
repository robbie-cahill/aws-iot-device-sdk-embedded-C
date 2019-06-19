/*
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * @file aws_iot_jobs_api.c
 * @brief Implements the user-facing functions of the Jobs library.
 */

/* The config header is always included first. */
#include "iot_config.h"

/* Jobs internal include. */
#include "private/aws_iot_jobs_internal.h"

/*-----------------------------------------------------------*/

const char * AwsIotJobs_strerror( AwsIotJobsError_t status )
{
    const char * pMessage = NULL;

    switch( status )
    {
        case AWS_IOT_JOBS_SUCCESS:
            pMessage = "SUCCESS";
            break;

        case AWS_IOT_JOBS_STATUS_PENDING:
            pMessage = "STATUS PENDING";
            break;

        case AWS_IOT_JOBS_INIT_FAILED:
            pMessage = "INIT FAILED";
            break;

        case AWS_IOT_JOBS_BAD_PARAMETER:
            pMessage = "BAD PARAMETER";
            break;

        case AWS_IOT_JOBS_NO_MEMORY:
            pMessage = "NO MEMORY";
            break;

        case AWS_IOT_JOBS_MQTT_ERROR:
            pMessage = "MQTT ERROR";
            break;

        case AWS_IOT_JOBS_BAD_RESPONSE:
            pMessage = "BAD RESPONSE";
            break;

        case AWS_IOT_JOBS_TIMEOUT:
            pMessage = "TIMEOUT";
            break;

        case AWS_IOT_JOBS_INVALID_TOPIC:
            pMessage = "FAILED: INVALID TOPIC";
            break;

        case AWS_IOT_JOBS_INVALID_JSON:
            pMessage = "FAILED: INVALID JSON";
            break;

        case AWS_IOT_JOBS_INVALID_REQUEST:
            pMessage = "FAILED: INVALID REQUEST";
            break;

        case AWS_IOT_JOBS_INVALID_STATE:
            pMessage = "FAILED: INVALID STATE TRANSITION";
            break;

        case AWS_IOT_JOBS_NOT_FOUND:
            pMessage = "FAILED: NOT FOUND";
            break;

        case AWS_IOT_JOBS_VERSION_MISMATCH:
            pMessage = "FAILED: VERSION MISMATCH";
            break;

        case AWS_IOT_JOBS_INTERNAL_ERROR:
            pMessage = "FAILED: INTERNAL ERROR";
            break;

        case AWS_IOT_JOBS_THROTTLED:
            pMessage = "FAILED: THROTTLED";
            break;

        case AWS_IOT_JOBS_TERMINAL_STATE:
            pMessage = "FAILED: TERMINAL STATE";
            break;

        default:
            pMessage = "INVALID STATUS";
            break;
    }

    return pMessage;
}

/*-----------------------------------------------------------*/

const char * AwsIotJobs_StateName( AwsIotJobState_t state )
{
    const char * pMessage = NULL;

    switch( state )
    {
        case AWS_IOT_JOB_STATE_QUEUED:
            pMessage = "QUEUED";
            break;

        case AWS_IOT_JOB_STATE_IN_PROGRESS:
            pMessage = "IN PROGRESS";
            break;

        case AWS_IOT_JOB_STATE_FAILED:
            pMessage = "FAILED";
            break;

        case AWS_IOT_JOB_STATE_SUCCEEDED:
            pMessage = "SUCCEEDED";
            break;

        case AWS_IOT_JOB_STATE_CANCELED:
            pMessage = "CANCELED";
            break;

        case AWS_IOT_JOB_STATE_TIMED_OUT:
            pMessage = "TIMED OUT";
            break;

        case AWS_IOT_JOB_STATE_REJECTED:
            pMessage = "REJECTED";
            break;

        case AWS_IOT_JOB_STATE_REMOVED:
            pMessage = "REMOVED";
            break;

        default:
            pMessage = "INVALID STATE";
            break;
    }

    return pMessage;
}

/*-----------------------------------------------------------*/