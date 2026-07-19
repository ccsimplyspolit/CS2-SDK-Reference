#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BeamType_t.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xb40
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_Beam : public source2sdk::client::C_BaseModelEntity
        {
        public:
            float m_flFrameRate; // 0xa88            
            float m_flHDRColorScale; // 0xa8c            
            source2sdk::entity2::GameTime_t m_flFireTime; // 0xa90            
            float m_flDamage; // 0xa94            
            std::uint8_t m_nNumBeamEnts; // 0xa98            
            uint8_t _pad0a99[0x3]; // 0xa99
            // metadata: MNotSaved
            std::int32_t m_queryHandleHalo; // 0xa9c            
            uint8_t _pad0aa0[0x20]; // 0xaa0
            // m_hBaseMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial;
            char m_hBaseMaterial[0x8]; // 0xac0            
            // m_nHaloIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex;
            char m_nHaloIndex[0x8]; // 0xac8            
            source2sdk::client::BeamType_t m_nBeamType; // 0xad0            
            std::uint32_t m_nBeamFlags; // 0xad4            
            // m_hAttachEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachEntity[10];
            char m_hAttachEntity[0x28]; // 0xad8            
            source2sdk::modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0xb00            
            uint8_t _pad0b0a[0x2]; // 0xb0a
            float m_fWidth; // 0xb0c            
            float m_fEndWidth; // 0xb10            
            float m_fFadeLength; // 0xb14            
            float m_fHaloScale; // 0xb18            
            float m_fAmplitude; // 0xb1c            
            float m_fStartFrame; // 0xb20            
            float m_fSpeed; // 0xb24            
            float m_flFrame; // 0xb28            
            bool m_bTurnedOff; // 0xb2c            
            uint8_t _pad0b2d[0x3]; // 0xb2d
            VectorWS m_vecEndPos; // 0xb30            
            // m_hEndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndEntity;
            char m_hEndEntity[0x4]; // 0xb3c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Beam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Beam) == 0xb40);
    };
};
