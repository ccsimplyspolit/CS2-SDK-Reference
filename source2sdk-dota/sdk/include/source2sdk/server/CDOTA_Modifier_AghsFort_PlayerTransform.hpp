#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_PlayerTransform : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::itemid_t m_nCourierItemId; // 0x1a58            
            CUtlString m_ModelNameOfDisguise; // 0x1a60            
            uint8_t _pad1a68[0x8]; // 0x1a68
            std::int32_t m_nMoveSpeed; // 0x1a70            
            std::int32_t m_nDisguisedSpeed; // 0x1a74            
            source2sdk::client::ParticleIndex_t m_nDisguiseEffectIndex; // 0x1a78            
            // m_hCourier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCourier;
            char m_hCourier[0x4]; // 0x1a7c            
            bool m_bIsFlyingCourier; // 0x1a80            
            uint8_t _pad1a81[0x7]; // 0x1a81
            char* s_pszDonkeyDisguise; // 0x1a88            
            float invul_duration; // 0x1a90            
            bool m_bParticlesSpawned; // 0x1a94            
            uint8_t _pad1a95[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_PlayerTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_PlayerTransform) == 0x1a98);
    };
};
