/*
 * This source file is part of an OSTIS project. For the latest info, see http://ostis.net
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#pragma once
#include <string>

namespace generateResponseModule
{
class Constants
{
public:
  static std::string const generateAnswerAgentClassName;

  static std::string const messageAddrParamName;

  static std::string const answerAddrParamName;

  static std::string const roleRelationVarName;

  static std::string const messageParamVarName;

  static std::string const messageEntityClassVarName;
};

}  // namespace generateResponseModule