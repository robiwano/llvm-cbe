//===---------------------- LLVM C Backend test file ----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This code tests to see that the CBE will execute a thread fence statement
// correctly.
//
//===----------------------------------------------------------------------===//

int main() {
  int x = 6;
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  return x;
}
