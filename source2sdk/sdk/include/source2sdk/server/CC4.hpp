#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x10d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CC4 : public source2sdk::server::CCSWeaponBase
        {
        public:
            uint8_t _pad1050[0x30]; // 0x1050
            VectorWS m_vecLastValidPlayerHeldPosition; // 0x1080            
            VectorWS m_vecLastValidDroppedPosition; // 0x108c            
            bool m_bDoValidDroppedPositionCheck; // 0x1098            
            bool m_bStartedArming; // 0x1099            
            uint8_t _pad109a[0x2]; // 0x109a
            source2sdk::entity2::GameTime_t m_fArmedTime; // 0x109c            
            bool m_bBombPlacedAnimation; // 0x10a0            
            bool m_bIsPlantingViaUse; // 0x10a1            
            uint8_t _pad10a2[0x6]; // 0x10a2
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0x10a8            
            std::int32_t m_nSpotRules; // 0x10c0            
            bool m_bPlayedArmingBeeps[7]; // 0x10c4            
            bool m_bBombPlanted; // 0x10cb            
            uint8_t _pad10cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CC4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CC4) == 0x10d0);
    };
};
