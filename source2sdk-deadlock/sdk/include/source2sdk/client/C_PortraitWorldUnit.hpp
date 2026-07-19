#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CitadelPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"

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
        // Size: 0x10f0
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            bool m_bSuppressIntroEffects; // 0xee8            
            bool m_bIsAlternateLoadout; // 0xee9            
            bool m_bSpawnBackgroundModels; // 0xeea            
            bool m_bAnimateCloth; // 0xeeb            
            bool m_bDeferredPortrait; // 0xeec            
            bool m_bShowParticleAssetModifiers; // 0xeed            
            bool m_bIgnorePortraitInfo; // 0xeee            
            uint8_t _pad0eef[0x1]; // 0xeef
            CUtlSymbolLarge m_BodyGroup; // 0xef0            
            float m_flStartingAnimationCycle; // 0xef8            
            float m_flRareLoadoutAnimChance; // 0xefc            
            uint8_t _pad0f00[0x10]; // 0xf00
            source2sdk::client::CitadelPortraitEnvironmentType_t m_environment; // 0xf10            
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0xf14            
            uint8_t _pad0f18[0x170]; // 0xf18
            CUtlSymbolLarge m_cameraName; // 0x1088            
            uint8_t _pad1090[0x30]; // 0x1090
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x10c0            
            source2sdk::client::ParticleIndex_t m_nAmbientParticle; // 0x10c4            
            source2sdk::client::HeroID_t m_heroID; // 0x10c8            
            uint8_t _pad10cc[0x4]; // 0x10cc
            CUtlSymbolLarge m_strGraphBaseState; // 0x10d0            
            CUtlSymbolLarge m_sceneName; // 0x10d8            
            std::int32_t m_nThinksUntilPresent; // 0x10e0            
            uint8_t _pad10e4[0xc];
            
            // Datamap fields:
            // uint32_t heroid; // 0x7fffffff
            // bool skip_pet_spawn; // 0x7fffffff
            // int32_t model_index; // 0x7fffffff
            // bool StartDisabled; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x10f0);
    };
};
