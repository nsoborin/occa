/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2018 David Medina and Tim Warburton
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */
#if 0
#  ifndef OCCA_MODES_THREADS_REGISTRATION_HEADER
#  define OCCA_MODES_THREADS_REGISTRATION_HEADER

#include <occa/defines.hpp>
#include <occa/mode.hpp>
#include <occa/modes/threads/device.hpp>
#include <occa/modes/threads/kernel.hpp>
#include <occa/modes/serial/memory.hpp>
#include <occa/base.hpp>

namespace occa {
  namespace threads {
    class modeInfo : public modeInfo_v {
    public:
      modeInfo();

      void init();
    };

    // extern occa::mode<threads::modeInfo,
    //                   threads::device> mode;
  }
}

#  endif
#endif
