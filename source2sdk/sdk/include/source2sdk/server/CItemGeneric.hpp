#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CItemGenericTriggerHelper;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb30
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad0a00[0x14]; // 0xa00
            // metadata: MNotSaved
            bool m_bHasTriggerRadius; // 0xa14            
            // metadata: MNotSaved
            bool m_bHasPickupRadius; // 0xa15            
            uint8_t _pad0a16[0x2]; // 0xa16
            // metadata: MNotSaved
            float m_flPickupRadiusSqr; // 0xa18            
            // metadata: MNotSaved
            float m_flTriggerRadiusSqr; // 0xa1c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0xa20            
            // metadata: MNotSaved
            bool m_bPlayerCounterListenerAdded; // 0xa24            
            // metadata: MNotSaved
            bool m_bPlayerInTriggerRadius; // 0xa25            
            uint8_t _pad0a26[0x2]; // 0xa26
            // metadata: MNotSaved
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0xa28            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0xa30            
            // metadata: MNotSaved
            bool m_bAutoStartAmbientSound; // 0xa38            
            uint8_t _pad0a39[0x7]; // 0xa39
            // metadata: MNotSaved
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0xa40            
            // metadata: MNotSaved
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0xa48            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupSoundEffect; // 0xa50            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupScriptFunction; // 0xa58            
            // metadata: MNotSaved
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0xa60            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xa68            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xa70            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupFilterName; // 0xa78            
            // metadata: MNotSaved
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0xa80            
            uint8_t _pad0a84[0x4]; // 0xa84
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0xa88            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0xaa0            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xab8            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0xad0            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xae8            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xb00            
            // metadata: MNotSaved
            float m_flPickupRadius; // 0xb08            
            // metadata: MNotSaved
            float m_flTriggerRadius; // 0xb0c            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0xb10            
            // metadata: MNotSaved
            bool m_bGlowWhenInTrigger; // 0xb18            
            // metadata: MNotSaved
            Color m_glowColor; // 0xb19            
            // metadata: MNotSaved
            bool m_bUseable; // 0xb1d            
            uint8_t _pad0b1e[0x2]; // 0xb1e
            // metadata: MNotSaved
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0xb20            
            uint8_t _pad0b24[0xc];
            
            // Datamap fields:
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xb30);
    };
};
