#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CustomCrosshairSettings_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
#include "source2sdk/client/ECitadelAudioLoopSounds.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
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
        // Size: 0x19c0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeaponVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyDescription "The DOF settings to apply while zoomed in."
            source2sdk::client::DOFDesc_t m_DOFWhileZoomed; // 0x1818            
            // metadata: MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
            bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x1828            
            uint8_t _pad1829[0x7]; // 0x1829
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyFriendlyName "Fire while disarmed sound"
            CSoundEventName m_sDisarmedSound; // 0x1830            
            float m_flMinDisarmedSoundInterval; // 0x1840            
            uint8_t _pad1844[0x4]; // 0x1844
            CSoundEventName m_sObstructedShotSound; // 0x1848            
            // m_mapDelayLoopsSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ENextAttackDelayReason_t,CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName>> m_mapDelayLoopsSounds;
            char m_mapDelayLoopsSounds[0x28]; // 0x1858            
            // metadata: MPropertyStartGroup "Action Reload"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
            float m_flActionReloadTimingStart; // 0x1880            
            // metadata: MPropertyDescription "If we have action reloads, how long is the window"
            float m_flActionReloadTimingDuration; // 0x1884            
            // metadata: MPropertyStartGroup "UI"
            CUtlString m_strCrosshairCSSClass; // 0x1888            
            bool m_bUseCustomCrosshairSettings; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            // metadata: MPropertySuppressExpr "m_bUseCustomCrosshairSettings == false"
            source2sdk::client::CustomCrosshairSettings_t m_CustomCrosshairSettings; // 0x1894            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Effect to parent to the gun.CP.0 = muzzle attachment source below, CP.1 = muzzle_fx. CP2.X = ammo frac, CP2.Y = is reloading (1/0), CP2.Z = shot recently (1/0)."
            // m_PassiveWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PassiveWeaponParticle;
            char m_PassiveWeaponParticle[0xe0]; // 0x18d8            
            CUtlString m_strPassiveWeaponAttachmentSource; // 0x19b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeaponVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeaponVData) == 0x19c0);
    };
};
