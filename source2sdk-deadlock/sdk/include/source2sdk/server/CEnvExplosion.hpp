#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d8
        // Has VTable
        #pragma pack(push, 1)
        class CEnvExplosion : public source2sdk::server::CModelPointEntity
        {
        public:
            std::int32_t m_iMagnitude; // 0x780            
            float m_flPlayerDamage; // 0x784            
            std::int32_t m_iRadiusOverride; // 0x788            
            float m_flInnerRadius; // 0x78c            
            float m_flDamageForce; // 0x790            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInflictor;
            char m_hInflictor[0x4]; // 0x794            
            source2sdk::client::DamageTypes_t m_iCustomDamageType; // 0x798            
            bool m_bCreateDebris; // 0x79c            
            uint8_t _pad079d[0xb]; // 0x79d
            CUtlSymbolLarge m_iszCustomEffectName; // 0x7a8            
            CUtlSymbolLarge m_iszCustomSoundName; // 0x7b0            
            bool m_bSuppressParticleImpulse; // 0x7b8            
            uint8_t _pad07b9[0x3]; // 0x7b9
            source2sdk::client::Class_T m_iClassIgnore; // 0x7bc            
            source2sdk::client::Class_T m_iClassIgnore2; // 0x7c0            
            uint8_t _pad07c4[0x4]; // 0x7c4
            CUtlSymbolLarge m_iszEntityIgnoreName; // 0x7c8            
            // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityIgnore;
            char m_hEntityIgnore[0x4]; // 0x7d0            
            uint8_t _pad07d4[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge explosion_type; // 0x7fffffff
            // CUtlSymbolLarge m_sExplosionType; // 0x7a0
            // void InputExplode; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvExplosion) == 0x7d8);
    };
};
