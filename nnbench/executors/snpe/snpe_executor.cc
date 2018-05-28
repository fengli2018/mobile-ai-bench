// Copyright 2018 Xiaomi, Inc.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nnbench/executors/snpe/snpe_executor.h"

namespace nnbench {

Status SnpeExecutor::Prepare(const char *model_name) {
  (void)(model_name);
  return Status::NOT_SUPPORTED;
}

Status SnpeExecutor::Run(const std::map<std::string, BaseTensor> &inputs,
                         std::map<std::string, BaseTensor> *outputs) {
  (void)(inputs);
  (void)(outputs);
  return Status::NOT_SUPPORTED;
}

}  // namespace nnbench