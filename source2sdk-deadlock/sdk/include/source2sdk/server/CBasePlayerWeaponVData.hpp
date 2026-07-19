#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/ItemFlagTypes_t.hpp"
#include "source2sdk/client/RumbleEffect_t.hpp"
#include "source2sdk/client/WeaponSound_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Standard-layout class: true
        // Size: 0x448
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBasePlayerWeaponVData
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // metadata: MPropertyDescription "The name of the weapon entity to spawn for this NPC weapon."
            CUtlString m_szClassName; // 0x10            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Model used on the ground or held by an entity"
            // metadata: MPropertyProvidesEditContextString
            // m_szWorldModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szWorldModel;
            char m_szWorldModel[0xe0]; // 0x18            
            // metadata: MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
            // m_sToolsOnlyOwnerModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sToolsOnlyOwnerModelName;
            char m_sToolsOnlyOwnerModelName[0xe0]; // 0xf8            
            // metadata: MPropertyDescription "Was the weapon was built right-handed?"
            bool m_bBuiltRightHanded; // 0x1d8            
            // metadata: MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
            bool m_bAllowFlipping; // 0x1d9            
            uint8_t _pad01da[0x6]; // 0x1da
            // metadata: MPropertyDescription "Attachment to fire bullets from"
            CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // 0x1e0            
            // metadata: MPropertyDescription "Effect when firing this weapon"
            // m_szMuzzleFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticle;
            char m_szMuzzleFlashParticle[0xe0]; // 0x200            
            // metadata: MPropertyDescription "Effect Config for Muzzle Flash - if set, will use this config specified in the particle effect, using whatever CP configuration is specified there, vdata muzzleflash attachment will be ignored"
            // metadata: MPropertyAttributeEditor "ParticleConfigName()"
            // metadata: MPropertyEditContextOverrideKey
            CUtlString m_szMuzzleFlashParticleConfig; // 0x2e0            
            // metadata: MPropertyDescription "Barrel smoke after firing this weapon"
            // m_szBarrelSmokeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szBarrelSmokeParticle;
            char m_szBarrelSmokeParticle[0xe0]; // 0x2e8            
            // metadata: MPropertyDescription "Barrel smoke shot threshold to create smoke"
            std::uint8_t m_nMuzzleSmokeShotThreshold; // 0x3c8            
            uint8_t _pad03c9[0x3]; // 0x3c9
            // metadata: MPropertyDescription "Barrel smoke shot timeout"
            float m_flMuzzleSmokeTimeout; // 0x3cc            
            // metadata: MPropertyDescription "Barrel smoke decrement rate when not firing"
            float m_flMuzzleSmokeDecrementRate; // 0x3d0            
            bool m_bGenerateMuzzleLight; // 0x3d4            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
            bool m_bLinkedCooldowns; // 0x3d5            
            uint8_t _pad03d6[0x2]; // 0x3d6
            // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEmbeddedSubclass<source2sdk::server::CCitadelModifier>> m_vecIntrinsicModifiers;
            char m_vecIntrinsicModifiers[0x18]; // 0x3d8            
            source2sdk::client::ItemFlagTypes_t m_iFlags; // 0x3f0            
            uint8_t _pad03f1[0x3]; // 0x3f1
            // metadata: MPropertyDescription "This value used to determine this weapon's importance in autoselection"
            std::int32_t m_iWeight; // 0x3f4            
            // metadata: MPropertyFriendlyName "Safe To Auto-Switch To"
            // metadata: MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
            bool m_bAutoSwitchTo; // 0x3f8            
            // metadata: MPropertyFriendlyName "Safe To Auto-Switch Away From"
            bool m_bAutoSwitchFrom; // 0x3f9            
            // metadata: MPropertyStartGroup "Ammo"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
            // metadata: MPropertyCustomFGDType "string"
            source2sdk::client::AmmoIndex_t m_nPrimaryAmmoType; // 0x3fa            
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
            // metadata: MPropertyCustomFGDType "string"
            source2sdk::client::AmmoIndex_t m_nSecondaryAmmoType; // 0x3fb            
            // metadata: MPropertyFriendlyName "Primary Clip Size"
            // metadata: MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_iMaxClip1; // 0x3fc            
            // metadata: MPropertyFriendlyName "Secondary Clip Size"
            // metadata: MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_iMaxClip2; // 0x400            
            // metadata: MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
            // metadata: MPropertyAttributeRange "-1 255"
            std::int32_t m_iDefaultClip1; // 0x404            
            // metadata: MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
            // metadata: MPropertyAttributeRange "-1 255"
            std::int32_t m_iDefaultClip2; // 0x408            
            // metadata: MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
            bool m_bReserveAmmoAsClips; // 0x40c            
            // metadata: MPropertyDescription "Regardless of ammo position, we'll always use clip1 as where our bullets come from"
            bool m_bTreatAsSingleClip; // 0x40d            
            // metadata: MPropertyDescription "Indicates whether to keep any loaded ammo in the weapon on reload"
            bool m_bKeepLoadedAmmo; // 0x40e            
            uint8_t _pad040f[0x1]; // 0x40f
            // metadata: MPropertyStartGroup "UI"
            source2sdk::client::RumbleEffect_t m_iRumbleEffect; // 0x410            
            float m_flDropSpeed; // 0x414            
            // metadata: MPropertyFriendlyName "HUD Bucket"
            // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
            std::int32_t m_iSlot; // 0x418            
            // metadata: MPropertyFriendlyName "HUD Bucket Position"
            // metadata: MPropertyDescription "Which 'row' to display this weapon in the HUD"
            std::int32_t m_iPosition; // 0x41c            
            // metadata: MPropertyStartGroup "Sounds"
            // m_aShootSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::WeaponSound_t,CSoundEventName> m_aShootSounds;
            char m_aShootSounds[0x28]; // 0x420            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_szClassName) == 0x10);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_szWorldModel) == 0x18);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_sToolsOnlyOwnerModelName) == 0xf8);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bBuiltRightHanded) == 0x1d8);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bAllowFlipping) == 0x1d9);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_sMuzzleAttachment) == 0x1e0);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_szMuzzleFlashParticle) == 0x200);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_szMuzzleFlashParticleConfig) == 0x2e0);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_szBarrelSmokeParticle) == 0x2e8);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_nMuzzleSmokeShotThreshold) == 0x3c8);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_flMuzzleSmokeTimeout) == 0x3cc);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_flMuzzleSmokeDecrementRate) == 0x3d0);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bGenerateMuzzleLight) == 0x3d4);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bLinkedCooldowns) == 0x3d5);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_vecIntrinsicModifiers) == 0x3d8);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iFlags) == 0x3f0);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iWeight) == 0x3f4);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bAutoSwitchTo) == 0x3f8);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bAutoSwitchFrom) == 0x3f9);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_nPrimaryAmmoType) == 0x3fa);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_nSecondaryAmmoType) == 0x3fb);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iMaxClip1) == 0x3fc);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iMaxClip2) == 0x400);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iDefaultClip1) == 0x404);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iDefaultClip2) == 0x408);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bReserveAmmoAsClips) == 0x40c);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bTreatAsSingleClip) == 0x40d);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_bKeepLoadedAmmo) == 0x40e);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iRumbleEffect) == 0x410);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_flDropSpeed) == 0x414);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iSlot) == 0x418);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_iPosition) == 0x41c);
        static_assert(offsetof(source2sdk::server::CBasePlayerWeaponVData, m_aShootSounds) == 0x420);
        
        static_assert(sizeof(source2sdk::server::CBasePlayerWeaponVData) == 0x448);
    };
};
