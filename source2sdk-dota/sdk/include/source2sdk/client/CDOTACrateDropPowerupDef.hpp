#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTACrateDropDroppableDef.hpp"
#include "source2sdk/client/EDOTACrateDropPowerupType.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTACrateDropPowerupDef : public source2sdk::client::CDOTACrateDropDroppableDef
        {
        public:
            source2sdk::client::EDOTACrateDropPowerupType m_ePowerupType; // 0xe8            
            uint8_t _pad00ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTACrateDropPowerupDef because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTACrateDropPowerupDef) == 0xf0);
    };
};
