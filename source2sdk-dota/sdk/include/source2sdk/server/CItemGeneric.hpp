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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x958
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad0830[0x14]; // 0x830
            // metadata: MNotSaved
            bool m_bHasTriggerRadius; // 0x844            
            // metadata: MNotSaved
            bool m_bHasPickupRadius; // 0x845            
            uint8_t _pad0846[0x2]; // 0x846
            // metadata: MNotSaved
            float m_flPickupRadiusSqr; // 0x848            
            // metadata: MNotSaved
            float m_flTriggerRadiusSqr; // 0x84c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0x850            
            // metadata: MNotSaved
            bool m_bPlayerCounterListenerAdded; // 0x854            
            // metadata: MNotSaved
            bool m_bPlayerInTriggerRadius; // 0x855            
            uint8_t _pad0856[0x2]; // 0x856
            // metadata: MNotSaved
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0x858            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0x860            
            // metadata: MNotSaved
            bool m_bAutoStartAmbientSound; // 0x868            
            uint8_t _pad0869[0x7]; // 0x869
            // metadata: MNotSaved
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0x870            
            // metadata: MNotSaved
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0x878            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupSoundEffect; // 0x880            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupScriptFunction; // 0x888            
            // metadata: MNotSaved
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0x890            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x898            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x8a0            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupFilterName; // 0x8a8            
            // metadata: MNotSaved
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0x8b0            
            uint8_t _pad08b4[0x4]; // 0x8b4
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0x8b8            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x8d0            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0x8e8            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0x900            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0x918            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0x930            
            // metadata: MNotSaved
            float m_flPickupRadius; // 0x938            
            // metadata: MNotSaved
            float m_flTriggerRadius; // 0x93c            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0x940            
            // metadata: MNotSaved
            bool m_bGlowWhenInTrigger; // 0x948            
            // metadata: MNotSaved
            Color m_glowColor; // 0x949            
            // metadata: MNotSaved
            bool m_bUseable; // 0x94d            
            uint8_t _pad094e[0x2]; // 0x94e
            // metadata: MNotSaved
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0x950            
            uint8_t _pad0954[0x4];
            
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
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0x958);
    };
};
