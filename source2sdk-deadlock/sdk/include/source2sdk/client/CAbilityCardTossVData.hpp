#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1ec0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityCardTossVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1818            
            // m_SummonedCard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonedCard;
            char m_SummonedCard[0xe0]; // 0x18f8            
            // m_ClubCardTrail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ClubCardTrail;
            char m_ClubCardTrail[0xe0]; // 0x19d8            
            // m_DiamondCardTrail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DiamondCardTrail;
            char m_DiamondCardTrail[0xe0]; // 0x1ab8            
            // m_HeartCardTrail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeartCardTrail;
            char m_HeartCardTrail[0xe0]; // 0x1b98            
            // m_SpadeCardTrail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpadeCardTrail;
            char m_SpadeCardTrail[0xe0]; // 0x1c78            
            // m_JokerCardTrail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JokerCardTrail;
            char m_JokerCardTrail[0xe0]; // 0x1d58            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCardSummonSound; // 0x1e38            
            CSoundEventName m_strCardCastSound; // 0x1e48            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ClubModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ClubModifier;
            char m_ClubModifier[0x10]; // 0x1e58            
            // m_DiamondModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_DiamondModifier;
            char m_DiamondModifier[0x10]; // 0x1e68            
            // metadata: MPropertyStartGroup "+Card Toss Properties"
            float m_flSummonedCardStartSideOffset; // 0x1e78            
            float m_flSummonedCardSideOffsetStep; // 0x1e7c            
            float m_flSummonedCardForwardOffset; // 0x1e80            
            float m_flSummonedCardVerticalOffset; // 0x1e84            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flSpadeWeight; // 0x1e88            
            float m_flClubWeight; // 0x1e8c            
            float m_flHeartWeight; // 0x1e90            
            float m_flDiamondWeight; // 0x1e94            
            float m_flJokerWeight; // 0x1e98            
            float m_flImprovedJokerWeight; // 0x1e9c            
            Vector m_vDefaultCardColor; // 0x1ea0            
            Vector m_vNextCardColor; // 0x1eac            
            // metadata: MPropertyStartGroup "AnimGraph2"
            CGlobalSymbol m_strNewCardActionName; // 0x1eb8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityCardTossVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityCardTossVData) == 0x1ec0);
    };
};
