#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/ItemFlagTypes_t.hpp"
#include "source2sdk/client/RumbleEffect_t.hpp"
#include "source2sdk/client/WeaponSound_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x520
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBasePlayerWeaponVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Model used on the ground or held by an entity"
            // metadata: MPropertyProvidesEditContextString
            // m_szWorldModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szWorldModel;
            char m_szWorldModel[0xe0]; // 0x28            
            // metadata: MPropertyDescription "Model used on the ground or held by an entity"
            // metadata: MPropertyProvidesEditContextString
            // m_szWorldModelAg2Override has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szWorldModelAg2Override;
            char m_szWorldModelAg2Override[0xe0]; // 0x108            
            // metadata: MPropertyDescription "Model used by the tools only to populate comboboxes for things like animgraph parameter pickers"
            // m_sToolsOnlyOwnerModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sToolsOnlyOwnerModelName;
            char m_sToolsOnlyOwnerModelName[0xe0]; // 0x1e8            
            // metadata: MPropertyDescription "Was the weapon was built right-handed?"
            bool m_bBuiltRightHanded; // 0x2c8            
            // metadata: MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
            bool m_bAllowFlipping; // 0x2c9            
            uint8_t _pad02ca[0x6]; // 0x2ca
            // metadata: MPropertyDescription "Attachment to fire bullets from"
            CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // 0x2d0            
            // metadata: MPropertyDescription "Effect when firing this weapon"
            // m_szMuzzleFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticle;
            char m_szMuzzleFlashParticle[0xe0]; // 0x2f0            
            // metadata: MPropertyDescription "Effect Config for Muzzle Flash - if set, will use this config specified in the particle effect, using whatever CP configuration is specified there, vdata muzzleflash attachment will be ignored"
            // metadata: MPropertyAttributeEditor "ParticleConfigName()"
            // metadata: MPropertyEditContextOverrideKey
            CUtlString m_szMuzzleFlashParticleConfig; // 0x3d0            
            // metadata: MPropertyDescription "Barrel smoke after firing this weapon"
            // m_szBarrelSmokeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szBarrelSmokeParticle;
            char m_szBarrelSmokeParticle[0xe0]; // 0x3d8            
            // metadata: MPropertyDescription "Barrel smoke shot threshold to create smoke"
            std::uint8_t m_nMuzzleSmokeShotThreshold; // 0x4b8            
            uint8_t _pad04b9[0x3]; // 0x4b9
            // metadata: MPropertyDescription "Barrel smoke shot timeout"
            float m_flMuzzleSmokeTimeout; // 0x4bc            
            // metadata: MPropertyDescription "Barrel smoke decrement rate when not firing"
            float m_flMuzzleSmokeDecrementRate; // 0x4c0            
            bool m_bGenerateMuzzleLight; // 0x4c4            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
            bool m_bLinkedCooldowns; // 0x4c5            
            source2sdk::client::ItemFlagTypes_t m_iFlags; // 0x4c6            
            uint8_t _pad04c7[0x1]; // 0x4c7
            // metadata: MPropertyDescription "This value used to determine this weapon's importance in autoselection"
            std::int32_t m_iWeight; // 0x4c8            
            // metadata: MPropertyFriendlyName "Safe To Auto-Switch To"
            // metadata: MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
            bool m_bAutoSwitchTo; // 0x4cc            
            // metadata: MPropertyFriendlyName "Safe To Auto-Switch Away From"
            bool m_bAutoSwitchFrom; // 0x4cd            
            // metadata: MPropertyStartGroup "Ammo"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
            // metadata: MPropertyCustomFGDType "string"
            source2sdk::client::AmmoIndex_t m_nPrimaryAmmoType; // 0x4ce            
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
            // metadata: MPropertyCustomFGDType "string"
            source2sdk::client::AmmoIndex_t m_nSecondaryAmmoType; // 0x4cf            
            // metadata: MPropertyFriendlyName "Primary Clip Size"
            // metadata: MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_iMaxClip1; // 0x4d0            
            // metadata: MPropertyFriendlyName "Secondary Clip Size"
            // metadata: MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_iMaxClip2; // 0x4d4            
            // metadata: MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
            // metadata: MPropertyAttributeRange "-1 255"
            std::int32_t m_iDefaultClip1; // 0x4d8            
            // metadata: MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
            // metadata: MPropertyAttributeRange "-1 255"
            std::int32_t m_iDefaultClip2; // 0x4dc            
            // metadata: MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
            bool m_bReserveAmmoAsClips; // 0x4e0            
            // metadata: MPropertyDescription "Regardless of ammo position, we'll always use clip1 as where our bullets come from"
            bool m_bTreatAsSingleClip; // 0x4e1            
            // metadata: MPropertyDescription "Indicates whether to keep any loaded ammo in the weapon on reload"
            bool m_bKeepLoadedAmmo; // 0x4e2            
            uint8_t _pad04e3[0x1]; // 0x4e3
            // metadata: MPropertyStartGroup "UI"
            source2sdk::client::RumbleEffect_t m_iRumbleEffect; // 0x4e4            
            float m_flDropSpeed; // 0x4e8            
            // metadata: MPropertyFriendlyName "HUD Bucket"
            // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
            std::int32_t m_iSlot; // 0x4ec            
            // metadata: MPropertyFriendlyName "HUD Bucket Position"
            // metadata: MPropertyDescription "Which 'row' to display this weapon in the HUD"
            std::int32_t m_iPosition; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            // metadata: MPropertyStartGroup "Sounds"
            // m_aShootSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::WeaponSound_t,CSoundEventName> m_aShootSounds;
            char m_aShootSounds[0x28]; // 0x4f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerWeaponVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerWeaponVData) == 0x520);
    };
};
