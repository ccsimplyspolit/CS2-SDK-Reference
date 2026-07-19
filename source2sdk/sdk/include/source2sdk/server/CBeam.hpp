#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BeamType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x810
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CBeam : public source2sdk::server::CBaseModelEntity
        {
        public:
            float m_flFrameRate; // 0x770            
            float m_flHDRColorScale; // 0x774            
            source2sdk::entity2::GameTime_t m_flFireTime; // 0x778            
            float m_flDamage; // 0x77c            
            std::uint8_t m_nNumBeamEnts; // 0x780            
            uint8_t _pad0781[0x7]; // 0x781
            // m_hBaseMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial;
            char m_hBaseMaterial[0x8]; // 0x788            
            // m_nHaloIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex;
            char m_nHaloIndex[0x8]; // 0x790            
            source2sdk::client::BeamType_t m_nBeamType; // 0x798            
            std::uint32_t m_nBeamFlags; // 0x79c            
            // m_hAttachEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachEntity[10];
            char m_hAttachEntity[0x28]; // 0x7a0            
            source2sdk::modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0x7c8            
            uint8_t _pad07d2[0x2]; // 0x7d2
            float m_fWidth; // 0x7d4            
            float m_fEndWidth; // 0x7d8            
            float m_fFadeLength; // 0x7dc            
            float m_fHaloScale; // 0x7e0            
            float m_fAmplitude; // 0x7e4            
            float m_fStartFrame; // 0x7e8            
            float m_fSpeed; // 0x7ec            
            float m_flFrame; // 0x7f0            
            bool m_bTurnedOff; // 0x7f4            
            uint8_t _pad07f5[0x3]; // 0x7f5
            VectorWS m_vecEndPos; // 0x7f8            
            // m_hEndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndEntity;
            char m_hEndEntity[0x4]; // 0x804            
            std::int32_t m_nDissolveType; // 0x808            
            uint8_t _pad080c[0x4];
            
            // Datamap fields:
            // float InputWidth; // 0x0
            // float InputNoise; // 0x0
            // float InputColorRedValue; // 0x0
            // float InputColorGreenValue; // 0x0
            // float InputColorBlueValue; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBeam) == 0x810);
    };
};
