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
        // Size: 0x1068
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_Beam : public source2sdk::client::C_BaseModelEntity
        {
        public:
            float m_flFrameRate; // 0xfb0            
            float m_flHDRColorScale; // 0xfb4            
            source2sdk::entity2::GameTime_t m_flFireTime; // 0xfb8            
            float m_flDamage; // 0xfbc            
            std::uint8_t m_nNumBeamEnts; // 0xfc0            
            uint8_t _pad0fc1[0x3]; // 0xfc1
            // metadata: MNotSaved
            std::int32_t m_queryHandleHalo; // 0xfc4            
            uint8_t _pad0fc8[0x20]; // 0xfc8
            // m_hBaseMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial;
            char m_hBaseMaterial[0x8]; // 0xfe8            
            // m_nHaloIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex;
            char m_nHaloIndex[0x8]; // 0xff0            
            source2sdk::client::BeamType_t m_nBeamType; // 0xff8            
            std::uint32_t m_nBeamFlags; // 0xffc            
            // m_hAttachEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachEntity[10];
            char m_hAttachEntity[0x28]; // 0x1000            
            source2sdk::modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0x1028            
            uint8_t _pad1032[0x2]; // 0x1032
            float m_fWidth; // 0x1034            
            float m_fEndWidth; // 0x1038            
            float m_fFadeLength; // 0x103c            
            float m_fHaloScale; // 0x1040            
            float m_fAmplitude; // 0x1044            
            float m_fStartFrame; // 0x1048            
            float m_fSpeed; // 0x104c            
            float m_flFrame; // 0x1050            
            bool m_bTurnedOff; // 0x1054            
            uint8_t _pad1055[0x3]; // 0x1055
            VectorWS m_vecEndPos; // 0x1058            
            // m_hEndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndEntity;
            char m_hEndEntity[0x4]; // 0x1064            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Beam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Beam) == 0x1068);
    };
};
