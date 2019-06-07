#pragma once

#include <ATen/ATen.h>
#include <ATen/core/ivalue.h>
#include <ATen/core/jit_type.h>
#include <ATen/core/stack.h>
#include <torch/csrc/WindowsTorchApiMacro.h>
#include <torch/csrc/jit/ir.h>

#include <list>
#include <vector>

namespace torch {
namespace jit {

using ::c10::ProfiledTensorTypePtr;

TORCH_API void EliminateGuards(std::shared_ptr<Graph> graph);

} // namespace jit
} // namespace torch
