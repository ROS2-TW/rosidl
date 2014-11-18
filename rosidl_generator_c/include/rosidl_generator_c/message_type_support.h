/* Copyright 2014 Open Source Robotics Foundation, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ROSIDL_GENERATOR_C_ROSIDL_GENERATOR_C_MESSAGE_TYPE_SUPPORT_H_
#define ROSIDL_GENERATOR_C_ROSIDL_GENERATOR_C_MESSAGE_TYPE_SUPPORT_H_

typedef struct rosidl_message_type_support_t
{
  const char * typesupport_identifier;
  const void * data;
} rosidl_message_type_support_t;

#define ROSIDL_GET_TYPE_SUPPORT(MsgPkgName, MsgName) \
rosidl_message_type_support_t * \
rosidl_get_type_support_##MsgPkgName_##MsgName();

#endif  /* ROSIDL_GENERATOR_C_ROSIDL_GENERATOR_C_MESSAGE_TYPE_SUPPORT_H_ */
