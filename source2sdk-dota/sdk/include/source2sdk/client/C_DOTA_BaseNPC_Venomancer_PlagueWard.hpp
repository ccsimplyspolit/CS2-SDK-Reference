#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"

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
        // Size: 0x19c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Venomancer_PlagueWard : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            bool m_bIsMovable; // 0x19b0            
            uint8_t _pad19b1[0x3]; // 0x19b1
            QAngle m_angle; // 0x19b4            
            std::int32_t m_iPoseParameterAim; // 0x19c0            
            uint8_t _pad19c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Venomancer_PlagueWard) == 0x19c8);
    };
};
