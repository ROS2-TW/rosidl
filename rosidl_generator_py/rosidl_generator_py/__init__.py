# Copyright 2014-2015 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import logging
import traceback

from .import_type_support_impl import import_type_support

__all__ = ['import_type_support']

try:
    from .generate_py_impl import generate_py
    assert generate_py
    __all__.append('generate_py')
except ImportError:
    logger = logging.getLogger('rosidl_generator_py')
    logger.debug(
        'Failed to import modules for generating Python structures:\n' + traceback.format_exc())
