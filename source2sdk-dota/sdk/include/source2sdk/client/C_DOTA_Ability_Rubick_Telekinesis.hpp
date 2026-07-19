#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
    };
};

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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Rubick_Telekinesis : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            VectorWS m_vStartLocation; // 0x6a8            
            VectorWS m_vLandLocation; // 0x6b4            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x6c0            
            uint8_t _pad06c4[0x4]; // 0x6c4
            source2sdk::client::C_DOTA_BaseNPC* m_pTarget; // 0x6c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Rubick_Telekinesis) == 0x6d0);
    };
};
