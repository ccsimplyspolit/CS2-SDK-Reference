#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x508
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        #pragma pack(push, 1)
        class CInfoTrooperNeutralCamp : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x4a0            
            uint8_t _pad04c0[0x18]; // 0x4c0
            CUtlSymbolLarge m_iszCampName; // 0x4d8            
            uint8_t _pad04e0[0x28];
            
            // Datamap fields:
            // bool InputSetDisabled; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoTrooperNeutralCamp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoTrooperNeutralCamp) == 0x508);
    };
};
