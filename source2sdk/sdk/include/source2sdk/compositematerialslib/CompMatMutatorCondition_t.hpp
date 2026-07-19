#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/CompMatPropertyMutatorConditionType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: compositematerialslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace compositematerialslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyElementNameFn
        #pragma pack(push, 1)
        struct CompMatMutatorCondition_t
        {
        public:
            // metadata: MPropertyAutoRebuildOnChange
            // metadata: MPropertyFriendlyName "Condition"
            source2sdk::compositematerialslib::CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyFriendlyName "Container Name"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strMutatorConditionContainerName; // 0x8            
            // metadata: MPropertyFriendlyName "Variable Name"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strMutatorConditionContainerVarName; // 0x10            
            // metadata: MPropertyFriendlyName "Variable Value"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strMutatorConditionContainerVarValue; // 0x18            
            // metadata: MPropertyFriendlyName "Pass when True"
            bool m_bPassWhenTrue; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatMutatorCondition_t, m_nMutatorCondition) == 0x0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatMutatorCondition_t, m_strMutatorConditionContainerName) == 0x8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatMutatorCondition_t, m_strMutatorConditionContainerVarName) == 0x10);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatMutatorCondition_t, m_strMutatorConditionContainerVarValue) == 0x18);
        static_assert(offsetof(source2sdk::compositematerialslib::CompMatMutatorCondition_t, m_bPassWhenTrue) == 0x20);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CompMatMutatorCondition_t) == 0x28);
    };
};
