#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Rubick_Telekinesis : public source2sdk::server::CDOTABaseAbility
        {
        public:
            VectorWS m_vStartLocation; // 0x580            
            VectorWS m_vLandLocation; // 0x58c            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x598            
            uint8_t _pad059c[0x4]; // 0x59c
            source2sdk::server::CDOTA_BaseNPC* m_pTarget; // 0x5a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Rubick_Telekinesis) == 0x5a8);
    };
};
