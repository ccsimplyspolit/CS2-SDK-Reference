#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nUniqueID"
        // static metadata: MNetworkVarNames "uint32 m_unAccountID"
        // static metadata: MNetworkVarNames "uint32 m_unTraceID"
        // static metadata: MNetworkVarNames "Vector m_vecEndPos"
        // static metadata: MNetworkVarNames "Vector m_vecStart"
        // static metadata: MNetworkVarNames "Vector m_vecLeft"
        // static metadata: MNetworkVarNames "Vector m_vecNormal"
        // static metadata: MNetworkVarNames "CPlayerSlot m_nPlayerSlot"
        // static metadata: MNetworkVarNames "int m_nEntity"
        // static metadata: MNetworkVarNames "int m_nHitbox"
        // static metadata: MNetworkVarNames "float m_flCreationTime"
        // static metadata: MNetworkVarNames "int m_nTintID"
        // static metadata: MNetworkVarNames "uint8 m_nVersion"
        // static metadata: MNetworkVarNames "CUtlString m_sTextureName"
        // static metadata: MNetworkVarNames "CUtlString m_sTextureNameDamaged"
        // static metadata: MNetworkVarNames "CUtlString m_sSoundNameDamaged"
        // static metadata: MNetworkVarNames "bool m_bDamaged"
        #pragma pack(push, 1)
        class CPlayerSprayDecal : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nUniqueID; // 0x780            
            // metadata: MNetworkEnable
            std::uint32_t m_unAccountID; // 0x784            
            // metadata: MNetworkEnable
            std::uint32_t m_unTraceID; // 0x788            
            // metadata: MNetworkEnable
            Vector m_vecEndPos; // 0x78c            
            // metadata: MNetworkEnable
            Vector m_vecStart; // 0x798            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0x7a4            
            // metadata: MNetworkEnable
            Vector m_vecNormal; // 0x7b0            
            // metadata: MNetworkEnable
            CPlayerSlot m_nPlayerSlot; // 0x7bc            
            // metadata: MNetworkEnable
            std::int32_t m_nEntity; // 0x7c0            
            // metadata: MNetworkEnable
            std::int32_t m_nHitbox; // 0x7c4            
            // metadata: MNetworkEnable
            float m_flCreationTime; // 0x7c8            
            // metadata: MNetworkEnable
            std::int32_t m_nTintID; // 0x7cc            
            // metadata: MNetworkEnable
            std::uint8_t m_nVersion; // 0x7d0            
            uint8_t _pad07d1[0x7]; // 0x7d1
            // metadata: MNetworkEnable
            CUtlString m_sTextureName; // 0x7d8            
            // metadata: MNetworkEnable
            CUtlString m_sTextureNameDamaged; // 0x7e0            
            // metadata: MNetworkEnable
            CUtlString m_sSoundNameDamaged; // 0x7e8            
            // metadata: MNetworkEnable
            bool m_bDamaged; // 0x7f0            
            uint8_t _pad07f1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerSprayDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayerSprayDecal) == 0x7f8);
    };
};
