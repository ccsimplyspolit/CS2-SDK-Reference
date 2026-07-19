#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/DOTAPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        // Size: 0x1df0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OutputAnimOver; // 0x19b0            
            bool m_bSuppressIntroEffects; // 0x19c8            
            bool m_bIsAlternateLoadout; // 0x19c9            
            bool m_bSkipBackgroundEntities; // 0x19ca            
            bool m_bSpawnBackgroundModels; // 0x19cb            
            bool m_bDeferredPortrait; // 0x19cc            
            bool m_bShowParticleAssetModifiers; // 0x19cd            
            bool m_bIgnorePortraitInfo; // 0x19ce            
            bool m_bFlyingCourier; // 0x19cf            
            bool m_bDisableDefaultModifiers; // 0x19d0            
            uint8_t _pad19d1[0x3]; // 0x19d1
            std::int32_t m_nEffigyStatusEffect; // 0x19d4            
            CUtlSymbolLarge m_effigySequenceName; // 0x19d8            
            float m_flStartingAnimationCycle; // 0x19e0            
            float m_flAnimationPlaybackSpeed; // 0x19e4            
            float m_flRareLoadoutAnimChance; // 0x19e8            
            bool m_bSetDefaultActivityOnSequenceFinished; // 0x19ec            
            uint8_t _pad19ed[0x3]; // 0x19ed
            // m_vecActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_vecActivityModifiers;
            char m_vecActivityModifiers[0x18]; // 0x19f0            
            source2sdk::client::DOTAPortraitEnvironmentType_t m_environment; // 0x1a08            
            uint8_t _pad1a0c[0x4]; // 0x1a0c
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0x1a10            
            uint8_t _pad1a14[0x1e4]; // 0x1a14
            CUtlSymbolLarge m_cameraName; // 0x1bf8            
            uint8_t _pad1c00[0x50]; // 0x1c00
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x1c50            
            std::int32_t m_nCourierType; // 0x1c54            
            uint8_t _pad1c58[0x198];
            
            // Datamap fields:
            // CUtlSymbolLarge activity_modifier; // 0x7fffffff
            // bool skip_pet_spawn; // 0x7fffffff
            // int32_t item_def0; // 0x7fffffff
            // int32_t item_def1; // 0x7fffffff
            // int32_t item_def2; // 0x7fffffff
            // int32_t item_def3; // 0x7fffffff
            // int32_t item_def4; // 0x7fffffff
            // int32_t item_def5; // 0x7fffffff
            // int32_t item_def6; // 0x7fffffff
            // int32_t item_def7; // 0x7fffffff
            // int32_t model_index; // 0x7fffffff
            // int32_t skin_override; // 0x7fffffff
            // bool StartDisabled; // 0x7fffffff
            // CUtlString activity; // 0x7fffffff
            // int32_t style_index0; // 0x7fffffff
            // int32_t style_index1; // 0x7fffffff
            // int32_t style_index2; // 0x7fffffff
            // int32_t style_index3; // 0x7fffffff
            // int32_t style_index4; // 0x7fffffff
            // int32_t style_index5; // 0x7fffffff
            // int32_t style_index6; // 0x7fffffff
            // int32_t style_index7; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x1df0);
    };
};
