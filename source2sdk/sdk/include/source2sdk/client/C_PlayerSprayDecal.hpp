#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerSprayDecalRenderHelper.hpp"
#include "source2sdk/client/C_ModelPointEntity.hpp"

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
        // Size: 0x10c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PlayerSprayDecal : public source2sdk::client::C_ModelPointEntity
        {
        public:
            std::int32_t m_nUniqueID; // 0xfb0            
            std::uint32_t m_unAccountID; // 0xfb4            
            std::uint32_t m_unTraceID; // 0xfb8            
            std::uint32_t m_rtGcTime; // 0xfbc            
            VectorWS m_vecEndPos; // 0xfc0            
            VectorWS m_vecStart; // 0xfcc            
            Vector m_vecLeft; // 0xfd8            
            Vector m_vecNormal; // 0xfe4            
            std::int32_t m_nPlayer; // 0xff0            
            std::int32_t m_nEntity; // 0xff4            
            std::int32_t m_nHitbox; // 0xff8            
            float m_flCreationTime; // 0xffc            
            std::int32_t m_nTintID; // 0x1000            
            std::uint8_t m_nVersion; // 0x1004            
            std::uint8_t m_ubSignature[128]; // 0x1005            
            uint8_t _pad1085[0xb]; // 0x1085
            source2sdk::client::CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0x1090            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerSprayDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerSprayDecal) == 0x10c0);
    };
};
