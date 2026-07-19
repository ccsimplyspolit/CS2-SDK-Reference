#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CModelPointEntity.hpp"

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
        // Size: 0x848
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CPlayerSprayDecal : public source2sdk::server::CModelPointEntity
        {
        public:
            std::int32_t m_nUniqueID; // 0x770            
            std::uint32_t m_unAccountID; // 0x774            
            std::uint32_t m_unTraceID; // 0x778            
            std::uint32_t m_rtGcTime; // 0x77c            
            VectorWS m_vecEndPos; // 0x780            
            VectorWS m_vecStart; // 0x78c            
            Vector m_vecLeft; // 0x798            
            Vector m_vecNormal; // 0x7a4            
            std::int32_t m_nPlayer; // 0x7b0            
            std::int32_t m_nEntity; // 0x7b4            
            std::int32_t m_nHitbox; // 0x7b8            
            float m_flCreationTime; // 0x7bc            
            std::int32_t m_nTintID; // 0x7c0            
            std::uint8_t m_nVersion; // 0x7c4            
            std::uint8_t m_ubSignature[128]; // 0x7c5            
            uint8_t _pad0845[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerSprayDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayerSprayDecal) == 0x848);
    };
};
