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
        // Size: 0xc60
        // Has VTable
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad0b30[0x14]; // 0xb30
            // metadata: MNotSaved
            bool m_bHasTriggerRadius; // 0xb44            
            // metadata: MNotSaved
            bool m_bHasPickupRadius; // 0xb45            
            uint8_t _pad0b46[0x2]; // 0xb46
            // metadata: MNotSaved
            float m_flPickupRadiusSqr; // 0xb48            
            // metadata: MNotSaved
            float m_flTriggerRadiusSqr; // 0xb4c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0xb50            
            // metadata: MNotSaved
            bool m_bPlayerCounterListenerAdded; // 0xb54            
            // metadata: MNotSaved
            bool m_bPlayerInTriggerRadius; // 0xb55            
            uint8_t _pad0b56[0x2]; // 0xb56
            // metadata: MNotSaved
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0xb58            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0xb60            
            // metadata: MNotSaved
            bool m_bAutoStartAmbientSound; // 0xb68            
            uint8_t _pad0b69[0x7]; // 0xb69
            // metadata: MNotSaved
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0xb70            
            // metadata: MNotSaved
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0xb78            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupSoundEffect; // 0xb80            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupScriptFunction; // 0xb88            
            // metadata: MNotSaved
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0xb90            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xb98            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xba0            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupFilterName; // 0xba8            
            // metadata: MNotSaved
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0xbb0            
            uint8_t _pad0bb4[0x4]; // 0xbb4
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0xbb8            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0xbd0            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xbe8            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0xc00            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xc18            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xc30            
            // metadata: MNotSaved
            float m_flPickupRadius; // 0xc38            
            // metadata: MNotSaved
            float m_flTriggerRadius; // 0xc3c            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0xc40            
            // metadata: MNotSaved
            bool m_bGlowWhenInTrigger; // 0xc48            
            // metadata: MNotSaved
            Color m_glowColor; // 0xc49            
            // metadata: MNotSaved
            bool m_bUseable; // 0xc4d            
            uint8_t _pad0c4e[0x2]; // 0xc4e
            // metadata: MNotSaved
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0xc50            
            uint8_t _pad0c54[0xc];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x0
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // void m_hAmbientSound; // 0xb30
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xc60);
    };
};
