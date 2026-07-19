#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x85c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_Inferno : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0fb0[0x40]; // 0xfb0
            source2sdk::client::ParticleIndex_t m_nfxFireDamageEffect; // 0xff0            
            uint8_t _pad0ff4[0x4]; // 0xff4
            // m_hInfernoPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoPointsSnapshot;
            char m_hInfernoPointsSnapshot[0x8]; // 0xff8            
            // m_hInfernoFillerPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoFillerPointsSnapshot;
            char m_hInfernoFillerPointsSnapshot[0x8]; // 0x1000            
            // m_hInfernoOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoOutlinePointsSnapshot;
            char m_hInfernoOutlinePointsSnapshot[0x8]; // 0x1008            
            // m_hInfernoClimbingOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoClimbingOutlinePointsSnapshot;
            char m_hInfernoClimbingOutlinePointsSnapshot[0x8]; // 0x1010            
            // m_hInfernoDecalsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoDecalsSnapshot;
            char m_hInfernoDecalsSnapshot[0x8]; // 0x1018            
            VectorWS m_firePositions[64]; // 0x1020            
            VectorWS m_fireParentPositions[64]; // 0x1320            
            bool m_bFireIsBurning[64]; // 0x1620            
            Vector m_BurnNormal[64]; // 0x1660            
            std::int32_t m_fireCount; // 0x1960            
            std::int32_t m_nInfernoType; // 0x1964            
            float m_nFireLifetime; // 0x1968            
            bool m_bInPostEffectTime; // 0x196c            
            uint8_t _pad196d[0x3]; // 0x196d
            std::int32_t m_lastFireCount; // 0x1970            
            std::int32_t m_nFireEffectTickBegin; // 0x1974            
            uint8_t _pad1978[0x6c08]; // 0x1978
            std::int32_t m_drawableCount; // 0x8580            
            bool m_blosCheck; // 0x8584            
            uint8_t _pad8585[0x3]; // 0x8585
            std::int32_t m_nlosperiod; // 0x8588            
            float m_maxFireHalfWidth; // 0x858c            
            float m_maxFireHeight; // 0x8590            
            VectorWS m_minBounds; // 0x8594            
            VectorWS m_maxBounds; // 0x85a0            
            float m_flLastGrassBurnThink; // 0x85ac            
            uint8_t _pad85b0[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Inferno because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Inferno) == 0x85c0);
    };
};
