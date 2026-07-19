#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CEffectData
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            VectorWS m_vOrigin; // 0x8            
            VectorWS m_vStart; // 0x14            
            Vector m_vNormal; // 0x20            
            QAngle m_vAngles; // 0x2c            
            CEntityHandle m_hEntity; // 0x38            
            CEntityHandle m_hOtherEntity; // 0x3c            
            float m_flScale; // 0x40            
            float m_flMagnitude; // 0x44            
            float m_flRadius; // 0x48            
            CUtlStringToken m_nSurfaceProp; // 0x4c            
            // m_nEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nEffectIndex;
            char m_nEffectIndex[0x8]; // 0x50            
            std::uint32_t m_nDamageType; // 0x58            
            std::uint8_t m_nPenetrate; // 0x5c            
            uint8_t _pad005d[0x1]; // 0x5d
            std::uint16_t m_nMaterial; // 0x5e            
            std::int16_t m_nHitBox; // 0x60            
            std::uint8_t m_nColor; // 0x62            
            std::uint8_t m_fFlags; // 0x63            
            source2sdk::modellib::AttachmentHandle_t m_nAttachmentIndex; // 0x64            
            uint8_t _pad0065[0x3]; // 0x65
            CUtlStringToken m_nAttachmentName; // 0x68            
            std::uint16_t m_iEffectName; // 0x6c            
            uint8_t _pad006e[0xa];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CEffectData, m_vOrigin) == 0x8);
        static_assert(offsetof(source2sdk::client::CEffectData, m_vStart) == 0x14);
        static_assert(offsetof(source2sdk::client::CEffectData, m_vNormal) == 0x20);
        static_assert(offsetof(source2sdk::client::CEffectData, m_vAngles) == 0x2c);
        static_assert(offsetof(source2sdk::client::CEffectData, m_hEntity) == 0x38);
        static_assert(offsetof(source2sdk::client::CEffectData, m_hOtherEntity) == 0x3c);
        static_assert(offsetof(source2sdk::client::CEffectData, m_flScale) == 0x40);
        static_assert(offsetof(source2sdk::client::CEffectData, m_flMagnitude) == 0x44);
        static_assert(offsetof(source2sdk::client::CEffectData, m_flRadius) == 0x48);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nSurfaceProp) == 0x4c);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nEffectIndex) == 0x50);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nDamageType) == 0x58);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nPenetrate) == 0x5c);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nMaterial) == 0x5e);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nHitBox) == 0x60);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nColor) == 0x62);
        static_assert(offsetof(source2sdk::client::CEffectData, m_fFlags) == 0x63);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nAttachmentIndex) == 0x64);
        static_assert(offsetof(source2sdk::client::CEffectData, m_nAttachmentName) == 0x68);
        static_assert(offsetof(source2sdk::client::CEffectData, m_iEffectName) == 0x6c);
        
        static_assert(sizeof(source2sdk::client::CEffectData) == 0x78);
    };
};
