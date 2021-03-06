﻿/*
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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets the documentation versions of an API.</p>
   */
  class AWS_APIGATEWAY_API GetDocumentationVersionsRequest : public APIGatewayRequest
  {
  public:
    GetDocumentationVersionsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>[Required] The identifier of an API of the to-be-retrieved documentation
     * versions.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The identifier of an API of the to-be-retrieved documentation
     * versions.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-retrieved documentation
     * versions.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-retrieved documentation
     * versions.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The identifier of an API of the to-be-retrieved documentation
     * versions.</p>
     */
    inline GetDocumentationVersionsRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-retrieved documentation
     * versions.</p>
     */
    inline GetDocumentationVersionsRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-retrieved documentation
     * versions.</p>
     */
    inline GetDocumentationVersionsRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The position of the returned <code>DocumentationVersion</code> in the
     * <a>DocumentationVersions</a> collection.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>The position of the returned <code>DocumentationVersion</code> in the
     * <a>DocumentationVersions</a> collection.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the returned <code>DocumentationVersion</code> in the
     * <a>DocumentationVersions</a> collection.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the returned <code>DocumentationVersion</code> in the
     * <a>DocumentationVersions</a> collection.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>The position of the returned <code>DocumentationVersion</code> in the
     * <a>DocumentationVersions</a> collection.</p>
     */
    inline GetDocumentationVersionsRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the returned <code>DocumentationVersion</code> in the
     * <a>DocumentationVersions</a> collection.</p>
     */
    inline GetDocumentationVersionsRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the returned <code>DocumentationVersion</code> in the
     * <a>DocumentationVersions</a> collection.</p>
     */
    inline GetDocumentationVersionsRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The page size of the returned documentation versions.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The page size of the returned documentation versions.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The page size of the returned documentation versions.</p>
     */
    inline GetDocumentationVersionsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_position;
    bool m_positionHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
