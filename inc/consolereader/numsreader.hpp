#pragma once
#ifndef NUMSREADER_HPP_QPED7FJH
#define NUMSREADER_HPP_QPED7FJH
#include "istandartreader.hpp"

namespace hw
{
  class NumsReader final : public IStandartReader<short>
  {
  public:
    NumsReader() noexcept = default;
    virtual short read_input() const override;
    void error_message() const;
  };

}

#endif /* end of include guard: NUMSREADER_HPP_QPED7FJH */
