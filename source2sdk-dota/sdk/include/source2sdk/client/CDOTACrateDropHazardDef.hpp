#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTACrateDropDroppableDef.hpp"
#include "source2sdk/client/EDOTACrateDropHazardType.hpp"

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
        // Size: 0xf8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTACrateDropHazardDef : public source2sdk::client::CDOTACrateDropDroppableDef
        {
        public:
            float m_flExplosionRadius; // 0xe8            
            float m_flExplosionStrength; // 0xec            
            float m_flUpkickExplosionStrength; // 0xf0            
            source2sdk::client::EDOTACrateDropHazardType m_eHazardType; // 0xf4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTACrateDropHazardDef because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTACrateDropHazardDef) == 0xf8);
    };
};
