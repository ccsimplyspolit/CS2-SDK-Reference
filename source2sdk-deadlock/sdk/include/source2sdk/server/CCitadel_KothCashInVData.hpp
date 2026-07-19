#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadel_MultiCapturePointVData.hpp"

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
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_KothCashInVData : public source2sdk::server::CCitadel_MultiCapturePointVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ZoneParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZoneParticle;
            char m_ZoneParticle[0xe0]; // 0x4a8            
            // m_EndParticleFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EndParticleFriendly;
            char m_EndParticleFriendly[0xe0]; // 0x588            
            // m_EndParticleEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EndParticleEnemy;
            char m_EndParticleEnemy[0xe0]; // 0x668            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_AuraModifier;
            char m_AuraModifier[0x10]; // 0x748            
            // m_ComebackAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ComebackAuraModifier;
            char m_ComebackAuraModifier[0x10]; // 0x758            
            // m_TrooperModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_TrooperModifier;
            char m_TrooperModifier[0x10]; // 0x768            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strKothCashedInSoundFriendly; // 0x778            
            CSoundEventName m_strKothCashedInSoundEnemy; // 0x788            
            CSoundEventName m_strKothContestedSound; // 0x798            
            CSoundEventName m_strKothBlockedSound; // 0x7a8            
            CSoundEventName m_strKothGiveUpSound; // 0x7b8            
            CSoundEventName m_strKothGiveUpWarnSound; // 0x7c8            
            CSoundEventName m_strKothCashinLoopSound; // 0x7d8            
            CSoundEventName m_strKothGivingUpWarningLoopSound; // 0x7e8            
            CSoundEventName m_strKothContestedLoopSound; // 0x7f8            
            CSoundEventName m_strKothCaptureStartAnnounce; // 0x808            
            // metadata: MPropertyStartGroup "Gameplay"
            std::int32_t m_iComebackBounty; // 0x818            
            float m_flZoneHeightMeters; // 0x81c            
            float m_flTotalTimeToCaptureFavored; // 0x820            
            float m_flTotalTimeToCaptureUnfavored; // 0x824            
            float m_flTimeToGiveUp; // 0x828            
            float m_flTimeToWarnAboutGivingUp; // 0x82c            
            std::int32_t m_nGiveUpOrbs; // 0x830            
            float m_flTroopersMin; // 0x834            
            float m_flTroopersMax; // 0x838            
            float m_flTroopersSpawnRate; // 0x83c            
            float m_flDelayedDelete; // 0x840            
            uint8_t _pad0844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_KothCashInVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_KothCashInVData) == 0x848);
    };
};
