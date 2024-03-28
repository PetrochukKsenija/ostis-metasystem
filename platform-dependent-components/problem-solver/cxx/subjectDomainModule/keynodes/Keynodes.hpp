/*
 * Copyright (c) 2022 Intelligent Semantic Systems LLC, All rights reserved.
 * Author Viktor Markovec
 */

#pragma once

#include "sc-memory/sc_addr.hpp"
#include "sc-memory/sc_object.hpp"

#include "Keynodes.generated.hpp"

namespace subjectDomainModule
{
class Keynodes : public ScObject
{
  SC_CLASS()
  SC_GENERATED_BODY()

public:
  SC_PROPERTY(Keynode("action_get_decomposition"), ForceCreate)
  static ScAddr action_get_decomposition;

  SC_PROPERTY(Keynode("action_add_section"), ForceCreate)
  static ScAddr action_add_section;

  SC_PROPERTY(Keynode("action_remove_section"), ForceCreate)
  static ScAddr action_remove_section;

  SC_PROPERTY(Keynode("nrel_entity_decomposition"), ForceCreate)
  static ScAddr nrel_entity_decomposition;

  SC_PROPERTY(Keynode("removed_section"), ForceCreate)
  static ScAddr removed_section;

  SC_PROPERTY(Keynode("section"), ForceCreate)
  static ScAddr section;

  SC_PROPERTY(Keynode("not_enough_formed_structure"), ForceCreate)
  static ScAddr not_enough_formed_structure;

  SC_PROPERTY(Keynode("atomic_section"), ForceCreate)
  static ScAddr atomic_section;

  SC_PROPERTY(Keynode("non_atomic_section"), ForceCreate)
  static ScAddr non_atomic_section;

  SC_PROPERTY(Keynode("rrel_last"), ForceCreate)
  static ScAddr rrel_last;
};

}  // namespace subjectDomainModule
